# Usage: python3 x3d_gimbal_to_castlescript.py INPUT.x3d OUTPUT.x3d
# Replaces the ecmascript controller Script and its routes with a CastleScript equivalent.
# Reads joint names/limits/hierarchy from the XML; expects the DEF naming of the 13 file (hanim_<n>, m_<n>, ts_<n>).
import re, xml.etree.ElementTree as ET
import sys
SRC=sys.argv[1] if len(sys.argv)>1 else 'HAnimGimbalJointController13.x3d'
OUT=sys.argv[2] if len(sys.argv)>2 else 'HAnimGimbalJointController13_castle.x3d'
t=open(SRC).read()
names=re.findall(r"'([^']+)'",re.search(r"var names = \[(.*?)\];",t,re.S).group(1))
N=len(names)
root=ET.parse(SRC).getroot()
info={}
def walk(e,parent):
    for c in e:
        if c.tag=='HAnimJoint' and c.get('DEF'):
            info[c.get('name')]=dict(parent=parent,ll=c.get('llimit'),ul=c.get('ulimit'))
            walk(c,c.get('name'))
        else: walk(c,parent)
walk(root,None)
mats={m.get('DEF'):m for m in root.iter('Material') if m.get('DEF')}
idx={n:i for i,n in enumerate(names)}
parentOf=[idx[info[n]['parent']] if info[n]['parent'] else -1 for n in names]
kids=[[] for _ in names]
for i,p in enumerate(parentOf):
    if p>=0: kids[p].append(i)
firstChild=[k[0] if k else -1 for k in kids]
nKids=[len(k) for k in kids]
prevSib=[-1]*N; nextSib=[-1]*N
for k in kids:
    for a,b in zip(k,k[1:]): nextSib[a]=b; prevSib[b]=a
side=[0 if n.startswith('l_') else 1 if n.startswith('r_') else 2 for n in names]
def lims(n,key):
    v=info[n][key]
    return [float(x) for x in v.split()] if v else [0,0,0]
lo=[];hi=[]
for n in names:
    lo+=lims(n,'ll'); hi+=lims(n,'ul')
def f(x): return repr(round(x,4))
def fl(s):
    x=float(s); return str(x) if '.' in str(x) or 'e' in str(x) else str(x)+'.0'
base={}
for n in names:
    m=mats['m_'+n]; c=[float(x) for x in m.get('diffuseColor').split()]
    base[n]=', '.join(fl(x) for x in c)

# ---------- fields ----------
F=[]
def fld(name,typ,acc,val=None):
    F.append(f'      <field name="{name}" type="{typ}" accessType="{acc}"'+(f' value="{val}"' if val is not None else '')+'/>')
for a in 'XYZ': fld('drag'+a,'SFRotation','inputOnly')
for e in ['evNext','evPrev','evParent','evChild','evSibPrev','evSibNext','evReset','evDeselect']: fld(e,'SFTime','inputOnly')
fld('doSelect','SFInt32','inputOnly'); fld('doApply','SFInt32','inputOnly')
fld('reqSelect','SFInt32','outputOnly'); fld('reqApply','SFInt32','outputOnly')
fld('label','MFString','outputOnly')
for a in 'XYZ':
    for o,ty in [('ringMin','SFFloat'),('ringMax','SFFloat'),('ringOff','SFFloat'),('ringTr','SFFloat'),('ringXf','SFRotation')]:
        fld(f'{o}{a}',ty,'outputOnly')
for n in names:
    fld('pick_'+n,'SFTime','inputOnly')
    fld('rot_'+n,'SFRotation','outputOnly')
    fld('dif_'+n,'SFColor','outputOnly')
    fld('emi_'+n,'SFColor','outputOnly')
# state
fld('sel','SFInt32','initializeOnly','-1')
fld('ix','SFInt32','initializeOnly','0')
fld('limd','SFBool','initializeOnly','false')
for v in ['ta','tb','tc','pw','px','py','pz','qw','qx','qy','qz','sa']: fld(v,'SFFloat','initializeOnly','0')
fld('rq','SFRotation','initializeOnly','0 0 1 0')
fld('ang','MFFloat','initializeOnly',' '.join(['0']*(3*N)))
fld('lo','MFFloat','initializeOnly',' '.join(f(x) for x in lo))
fld('hi','MFFloat','initializeOnly',' '.join(f(x) for x in hi))
for nm,arr in [('parentOf',parentOf),('firstChild',firstChild),('nextSib',nextSib),('prevSib',prevSib),('nKids',nKids),('side',side)]:
    fld(nm,'MFInt32','initializeOnly',' '.join(map(str,arr)))
fld('names','MFString','initializeOnly',' '.join(f'&quot;{n}&quot;' for n in names))
fld('title','MFString','initializeOnly','&quot;LEFT&quot; &quot;RIGHT&quot; &quot;CENTER&quot;')

# ---------- code ----------
C=[]
YEL='vector(1.0, 0.85, 0.1)'; YEM='vector(0.45, 0.38, 0.0)'
axes={'X':'1.0, 0.0, 0.0','Y':'0.0, 1.0, 0.0','Z':'0.0, 0.0, 1.0'}
C.append(f"""function initialize(timestamp)
  reqSelect := {idx['l_shoulder']};
""")
# navigation
C.append(f"""function evNext(value, timestamp)
  reqSelect := if(sel < 0, 0, if(sel + 1 >= {N}, 0, sel + 1));
function evPrev(value, timestamp)
  reqSelect := if(sel <= 0, {N-1}, sel - 1);
function evParent(value, timestamp)
  when(sel >= 0, when(array_get(parentOf, sel) >= 0, reqSelect := array_get(parentOf, sel)));
function evChild(value, timestamp)
  when(sel >= 0, when(array_get(firstChild, sel) >= 0, reqSelect := array_get(firstChild, sel)));
function evSibPrev(value, timestamp)
  when(sel >= 0, when(array_get(prevSib, sel) >= 0, reqSelect := array_get(prevSib, sel)));
function evSibNext(value, timestamp)
  when(sel >= 0, when(array_get(nextSib, sel) >= 0, reqSelect := array_get(nextSib, sel)));
function evReset(value, timestamp)
  when(sel >= 0, (
    array_set(ang, 3 * sel, 0.0);
    array_set(ang, 3 * sel + 1, 0.0);
    array_set(ang, 3 * sel + 2, 0.0);
    reqSelect := sel
  ));
function evDeselect(value, timestamp)
  reqSelect := -1;
""")
# drag
for k,a in enumerate('XYZ'):
    C.append(f"""function drag{a}(value, timestamp)
  when(sel >= 0, (
    ta := if(vector_get(value, 0) + vector_get(value, 1) + vector_get(value, 2) < 0, -1.0, 1.0) * vector_get(value, 3);
    ix := 3 * sel + {k};
    when(array_get(lo, ix) <> array_get(hi, ix), ta := max(array_get(lo, ix), min(array_get(hi, ix), ta)));
    array_set(ang, ix, ta);
    ringXf{a} := vector({axes[a]}, ta);
    reqApply := sel
  ));
""")
# doSelect
unpaint=';\n      '.join(f"when(sel = {i}, (dif_{n} := vector({base[n]}); emi_{n} := vector(0.0, 0.0, 0.0)))" for i,n in enumerate(names))
paint=';\n      '.join(f"when(sel = {i}, (dif_{n} := {YEL}; emi_{n} := {YEM}))" for i,n in enumerate(names))
ringsel=[]
for k,a in enumerate('XYZ'):
    ringsel.append(f"""      ix := 3 * sel + {k};
      limd := array_get(lo, ix) <> array_get(hi, ix);
      when(limd, array_set(ang, ix, max(array_get(lo, ix), min(array_get(hi, ix), array_get(ang, ix)))));
      ringMin{a} := if(limd, array_get(lo, ix), -6.28);
      ringMax{a} := if(limd, array_get(hi, ix), 6.28);
      ringOff{a} := array_get(ang, ix);
      ringTr{a} := if(and(limd, array_get(hi, ix) - array_get(lo, ix) < 0.04), 0.65, 0.0);
      ringXf{a} := vector({axes[a]}, array_get(ang, ix))""")
ringclear=';\n'.join(f"      ringTr{a} := 0.65;\n      ringXf{a} := vector({axes[a]}, 0.0)" for a in 'XYZ')
C.append(f"""function doSelect(value, timestamp)
  (
    when(sel >= 0, (
      {unpaint}
    ));
    sel := value;
    if(sel >= 0,
      (
      {paint};
{(';'+chr(10)).join(ringsel)}
      ),
      (
{ringclear}
      )
    );
    reqApply := sel
  );
""")
# doApply
dsp=';\n      '.join(f"when(value = {i}, rot_{n} := rq)" for i,n in enumerate(names))
def deg(e): return f"string(round(({e}) * 180 / pi))"
lim_s=' + '.join(
 f"if(array_get(lo, 3 * value + {k}) <> array_get(hi, 3 * value + {k}), '{a}[' + {deg(f'array_get(lo, 3 * value + {k})')} + ',' + {deg(f'array_get(hi, 3 * value + {k})')} + '] ', '{a}[free] ')"
 for k,a in enumerate('XYZ'))
ang_s=" + '   ' + ".join(f"'{a} ' + {deg(f'array_get(ang, 3 * value + {k})')}" for k,a in enumerate('XYZ'))
C.append(f"""function doApply(value, timestamp)
  (
    label := if(value < 0,
      array('GIMBAL', 'no joint selected', 'click a joint, or use NEXT'),
      array(
        array_get(title, array_get(side, value)) + ': ' + array_get(names, value) + '  (' + string(value + 1) + '/{N})',
        {ang_s} + '   ',
        'limits ' + {lim_s},
        'parent ' + if(array_get(parentOf, value) >= 0, array_get(names, array_get(parentOf, value)), '-') + '   children ' + string(array_get(nKids, value))
      ));
    when(value >= 0, (
      ta := array_get(ang, 3 * value) / 2.0;
      tb := array_get(ang, 3 * value + 1) / 2.0;
      tc := array_get(ang, 3 * value + 2) / 2.0;
      pw := cos(ta) * cos(tb);
      px := sin(ta) * cos(tb);
      py := cos(ta) * sin(tb);
      pz := sin(ta) * sin(tb);
      qw := pw * cos(tc) - pz * sin(tc);
      qx := px * cos(tc) + py * sin(tc);
      qy := py * cos(tc) - px * sin(tc);
      qz := pw * sin(tc) + pz * cos(tc);
      sa := sqrt(qx * qx + qy * qy + qz * qz);
      rq := if(sa < 0.000001,
              vector(0.0, 0.0, 1.0, 0.0),
              vector(qx / sa, qy / sa, qz / sa, 2.0 * arccos(max(-1.0, min(1.0, qw)))));
      {dsp}
    ))
  );
""")
# picks
for i,n in enumerate(names):
    C.append(f"function pick_{n}(value, timestamp)\n  reqSelect := if(sel = {i}, -1, {i});")
code='\n'.join(C).rstrip().rstrip(';')
code=re.sub(r';(\s*)(?=function )', r'\1', code)
code=code.replace('&','&amp;').replace('<','&lt;').replace('>','&gt;')
script=("    <!-- ==================== SCRIPT CONTROLLER (CastleScript) ==================== -->\n"
        "    <!-- Generated from the ecmascript controller. CastleScript cannot touch nodes, so every -->\n"
        "    <!-- per-joint change leaves the script as an output event routed to the node below.     -->\n"
        '    <Script DEF="controller" url="&quot;castlescript:\n'+code+'\n&quot;">\n'+'\n'.join(F)+'\n    </Script>\n')
# ---------- routes ----------
R=['    <!-- ==================== GIMBAL SENSOR & BUTTON ROUTES ===================== -->']
def rt(a,af,b,bf): R.append(f'    <ROUTE fromNode="{a}" fromField="{af}" toNode="{b}" toField="{bf}"/>')
for a in 'XYZ': rt('csG'+a,'rotation_changed','controller','drag'+a)
for ts,ev in [('tsNext','evNext'),('tsPrev','evPrev'),('tsUp','evParent'),('tsDown','evChild'),('tsSibPrev','evSibPrev'),('tsSibNext','evSibNext'),('tsReset','evReset'),('tsDeselect','evDeselect')]:
    rt(ts,'touchTime','controller',ev)
rt('controller','reqSelect','controller','doSelect'); rt('controller','reqApply','controller','doApply')
rt('controller','label','txtG','string')
for a in 'XYZ':
    rt('controller','ringMin'+a,'csG'+a,'minAngle'); rt('controller','ringMax'+a,'csG'+a,'maxAngle')
    rt('controller','ringOff'+a,'csG'+a,'offset'); rt('controller','ringTr'+a,'rmG'+a,'transparency')
    rt('controller','ringXf'+a,'ringG'+a,'rotation')
R.append('    <!-- ==================== JOINT ROUTES ==================== -->')
for n in names:
    rt('ts_'+n,'touchTime','controller','pick_'+n)
    rt('controller','rot_'+n,'hanim_'+n,'rotation')
    rt('controller','dif_'+n,'m_'+n,'diffuseColor')
    rt('controller','emi_'+n,'m_'+n,'emissiveColor')
routes='\n'.join(R)+'\n'
# ---------- splice ----------
s0=t.index('    <!-- ==================== SCRIPT CONTROLLER')
s1=t.index('</Script>')+len('</Script>\n')
r0=t.index('    <!-- ==================== GIMBAL SENSOR & BUTTON ROUTES')
r1=t.index('  </Scene>')
out=t[:s0]+script+'\n'+routes+t[r1:]
out=out.replace('content="HAnimGimbalJointController12.x3d"','content="HAnimGimbalJointController13_castle.x3d"')
out=out.replace('gimbal controller aligned to HAnim Hierarchy.txt.','gimbal controller aligned to HAnim Hierarchy.txt. CastleScript version for Castle Model Viewer.')
open(OUT,'w').write(out)
print(len(out),'bytes; script chars',len(code))
