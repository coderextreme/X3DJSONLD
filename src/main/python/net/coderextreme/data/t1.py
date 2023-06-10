# x3d.py package 4.0.64.4 loaded, have fun with X3D Graphics!
print("<!--")
from x3d import *
print("-->")
print(
X3D(profile="Interchange", version="3.0", 
head=head(children=[meta(name="generator", content="tovrmlx3d, http://castle-engine.sourceforge.net/view3dscene.php#section_converting"),
meta(name="source", content="t1.wrl"),
meta(name="translated", content="24 March 2023"),
meta(name="generator", content="X3dToJson.xslt, https://www.web3d.org/x3d/stylesheets/X3dToJson.html"),
meta(name="reference", content="X3D JSON encoding: https://www.web3d.org/wiki/index.php/X3D_JSON_Encoding")
]), 
Scene=Scene(children=[
NavigationInfo(type="\"EXAMINE\" \"FLY\" \"WALK\"", speed=3, avatarSize=[float(200),float(200),float(120)]),
WorldInfo(title="Arts Mapper"),
Viewpoint(description="looking North", position=((0,60,110)), orientation=((1,0,0,-0.699999988079071)), fieldOfView=0.7853981256484985),
Viewpoint(description="looking East", position=((-140,30,0)), orientation=((0,0.4000000059604645,0,-1.399999976158142)), fieldOfView=0.7853981256484985),
Viewpoint(description="Overhead", position=((0,150,0)), orientation=((1,0,0,-1.5700000524520874)), fieldOfView=0.7853981256484985),
ProtoDeclare(name="school", 
ProtoInterface=ProtoInterface(field=[field(name="pos", accessType="initializeOnly", type="SFVec3f", value=(0,0,0))
]), 
ProtoBody=ProtoBody(children=[
Transform(children=[
Shape(
appearance=
Appearance(
material=
Material(transparency=0.20000000298023224, diffuseColor=((0.5,0,1)))), 
geometry=
IndexedFaceSet(coordIndex=[0,1,4,-1,1,2,4,-1,2,3,4,-1,3,0,4,-1,0,3,2,1,-1], 
coord=
Coordinate(point=[(-0.3499999940395355,-0.3499999940395355,0.3499999940395355),(0.3499999940395355,-0.3499999940395355,0.3499999940395355),(0.3499999940395355,-0.3499999940395355,-0.3499999940395355),(-0.3499999940395355,-0.3499999940395355,-0.3499999940395355),(0,0.3499999940395355,0)])))], 
IS=IS(connect=[connect(nodeField="translation", protoField="pos")
]))])),
ProtoDeclare(name="institute", 
ProtoInterface=ProtoInterface(field=[field(name="pos", accessType="initializeOnly", type="SFVec3f", value=(0,0,0))
]), 
ProtoBody=ProtoBody(children=[
Transform(children=[
Shape(
appearance=
Appearance(
material=
Material(transparency=0.20000000298023224, diffuseColor=((1,1,0)))), 
geometry=
Box(size=((0.699999988079071,0.699999988079071,0.699999988079071))))], 
IS=IS(connect=[connect(nodeField="translation", protoField="pos")
]))])),
ProtoDeclare(name="disart_org", 
ProtoInterface=ProtoInterface(field=[field(name="pos", accessType="initializeOnly", type="SFVec3f", value=(0,0,0))
]), 
ProtoBody=ProtoBody(children=[
Transform(children=[
Shape(
appearance=
Appearance(
material=
Material(diffuseColor=((1,1,0)))), 
geometry=
Sphere(radius=0.699999988079071))], 
IS=IS(connect=[connect(nodeField="translation", protoField="pos")
]))])),
ProtoDeclare(name="org", 
ProtoInterface=ProtoInterface(field=[field(name="posi", accessType="initializeOnly", type="SFVec3f", value=(0,0,0)),
field(name="col", accessType="initializeOnly", type="SFColor", value=(0,0,0))
]), 
ProtoBody=ProtoBody(children=[
Transform(children=[
Shape(
appearance=
Appearance(
material=
Material(transparency=0.4000000059604645, 
IS=IS(connect=[connect(nodeField="emissiveColor", protoField="col")
]))), 
geometry=
Sphere(radius=1.100000023841858))], 
IS=IS(connect=[connect(nodeField="translation", protoField="posi")
]))])),
ProtoDeclare(name="l", 
ProtoInterface=ProtoInterface(field=[field(name="pos", accessType="initializeOnly", type="SFVec3f", value=(0,0,0))
]), 
ProtoBody=ProtoBody(children=[
ProtoInstance(name="org", fieldValue=[fieldValue(name="col", value=[0,0.6000000238418579,0])
], 
IS=IS(connect=[connect(nodeField="posi", protoField="pos")
]))])),
ProtoDeclare(name="r", 
ProtoInterface=ProtoInterface(field=[field(name="pos", accessType="initializeOnly", type="SFVec3f", value=(0,0,0))
]), 
ProtoBody=ProtoBody(children=[
ProtoInstance(name="org", fieldValue=[fieldValue(name="col", value=[0,0.30000001192092896,1])
], 
IS=IS(connect=[connect(nodeField="posi", protoField="pos")
]))])),
ProtoDeclare(name="n", 
ProtoInterface=ProtoInterface(field=[field(name="pos", accessType="initializeOnly", type="SFVec3f", value=(0,0,0))
]), 
ProtoBody=ProtoBody(children=[
ProtoInstance(name="org", fieldValue=[fieldValue(name="col", value=[1,0,0.20000000298023224])
], 
IS=IS(connect=[connect(nodeField="posi", protoField="pos")
]))])),
ProtoDeclare(name="i", 
ProtoInterface=ProtoInterface(field=[field(name="pos", accessType="initializeOnly", type="SFVec3f", value=(0,0,0))
]), 
ProtoBody=ProtoBody(children=[
ProtoInstance(name="org", fieldValue=[fieldValue(name="col", value=[0.6000000238418579,0,0.6000000238418579])
], 
IS=IS(connect=[connect(nodeField="posi", protoField="pos")
]))])),
Transform(translation=((-468,0,315)), children=[
Inline(url=["t.wrl"]),
Anchor(url=["javascript:window.open('./data/566.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], description="Derby Women's Centre", children=[
ProtoInstance(name="institute", fieldValue=[fieldValue(name="pos", value=[435.29998779296875,0.10000000149011612,-335.6000061035156])
])]),
Anchor(url=["javascript:window.open('./data/574.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], description="High Peak Community Arts", children=[
ProtoInstance(name="r", fieldValue=[fieldValue(name="pos", value=[400,0.10000000149011612,-385])
])]),
Anchor(url=["javascript:window.open('./data/576.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], description="Charlesworth Primary School", children=[
ProtoInstance(name="school", fieldValue=[fieldValue(name="pos", value=[400.6000061035156,0.10000000149011612,-392.8999938964844])
])]),
Anchor(url=["javascript:window.open('./data/579.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], description="Hope Valley College", children=[
ProtoInstance(name="school", fieldValue=[fieldValue(name="pos", value=[416.70001220703125,0.10000000149011612,-383.3999938964844])
])]),
Anchor(url=["javascript:window.open('./data/583.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], description="People Express", children=[
ProtoInstance(name="i", fieldValue=[fieldValue(name="pos", value=[429.8999938964844,0.10000000149011612,-319.6000061035156])
])]),
Anchor(url=["javascript:window.open('./data/589.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], description="QArts/Studios", children=[
ProtoInstance(name="i", fieldValue=[fieldValue(name="pos", value=[430,0.10000000149011612,-335])
])]),
Anchor(url=["javascript:window.open('./data/591.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], description="Stroke Unit, Derbyshire Royal Infirmary", children=[
ProtoInstance(name="institute", fieldValue=[fieldValue(name="pos", value=[435.79998779296875,0.10000000149011612,-335.29998779296875])
])]),
Anchor(url=["javascript:window.open('./data/592.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], description="Park View Primary, Derby", children=[
ProtoInstance(name="school", fieldValue=[fieldValue(name="pos", value=[438.29998779296875,0.10000000149011612,-338.6000061035156])
])]),
Anchor(url=["javascript:window.open('./data/593.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], description="First Movement", children=[
ProtoInstance(name="n", fieldValue=[fieldValue(name="pos", value=[429.8999938964844,0.10000000149011612,-360.29998779296875])
])]),
Anchor(url=["javascript:window.open('./data/594.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], description="St. Benedict R.C. School, Visual Impairment Unit", children=[
ProtoInstance(name="institute", fieldValue=[fieldValue(name="pos", value=[434.6000061035156,0.10000000149011612,-338.6000061035156])
])]),
Anchor(url=["javascript:window.open('./data/595.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], description="Beckett Primary, Derby", children=[
ProtoInstance(name="school", fieldValue=[fieldValue(name="pos", value=[434.79998779296875,0.10000000149011612,-336])
])]),
Anchor(url=["javascript:window.open('./data/597.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], description="Brackensdale Junior School, Communty Unit", children=[
ProtoInstance(name="institute", fieldValue=[fieldValue(name="pos", value=[432.70001220703125,0.10000000149011612,-336.6000061035156])
])]),
Anchor(url=["javascript:window.open('./data/598.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], description="Moorhead Primary, Derby", children=[
ProtoInstance(name="school", fieldValue=[fieldValue(name="pos", value=[437.6000061035156,0.10000000149011612,-332.6000061035156])
])]),
Anchor(url=["javascript:window.open('./data/600.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], description="Derby Deaf Club", children=[
ProtoInstance(name="institute", fieldValue=[fieldValue(name="pos", value=[434.70001220703125,0.10000000149011612,-336.8999938964844])
])]),
Anchor(url=["javascript:window.open('./data/601.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], description="Nightingale Junior, Derby", children=[
ProtoInstance(name="school", fieldValue=[fieldValue(name="pos", value=[436.29998779296875,0.10000000149011612,-333.3999938964844])
])]),
Anchor(url=["javascript:window.open('./data/603.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], description="St Mary's Primary, Derby", children=[
ProtoInstance(name="school", fieldValue=[fieldValue(name="pos", value=[435.20001220703125,0.10000000149011612,-336.79998779296875])
])]),
Anchor(url=["javascript:window.open('./data/604.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], description="Griffe Field Primary, Derby", children=[
ProtoInstance(name="school", fieldValue=[fieldValue(name="pos", value=[432.5,0.10000000149011612,-332.5])
])]),
Anchor(url=["javascript:window.open('./data/605.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], description="Leicester Road Day Centre, Melton Mowbray", children=[
ProtoInstance(name="institute", fieldValue=[fieldValue(name="pos", value=[474.70001220703125,0.10000000149011612,-318.79998779296875])
])]),
Anchor(url=["javascript:window.open('./data/606.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], description="Ivy House Special School, Derby", children=[
ProtoInstance(name="school", fieldValue=[fieldValue(name="pos", value=[436.1000061035156,0.10000000149011612,-334.8999938964844])
])]),
Anchor(url=["javascript:window.open('./data/607.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], description="Oakham Day Centre, Rutland", children=[
ProtoInstance(name="institute", fieldValue=[fieldValue(name="pos", value=[485.6000061035156,0.10000000149011612,-309])
])]),
Anchor(url=["javascript:window.open('./data/608.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], description="Parkwood School, Alfreton", children=[
ProtoInstance(name="school", fieldValue=[fieldValue(name="pos", value=[440.5,0.10000000149011612,-355.5])
])]),
Anchor(url=["javascript:window.open('./data/609.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], description="Ash Green, Specialist Learning Disability Resource", children=[
ProtoInstance(name="institute", fieldValue=[fieldValue(name="pos", value=[434.79998779296875,0.10000000149011612,-371.5])
])]),
Anchor(url=["javascript:window.open('./data/610.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], description="Ashgate Croft School, Chesterfield", children=[
ProtoInstance(name="school", fieldValue=[fieldValue(name="pos", value=[436.29998779296875,0.10000000149011612,-371.70001220703125])
])]),
Anchor(url=["javascript:window.open('./data/611.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], description="Highfields School, Matlock", children=[
ProtoInstance(name="school", fieldValue=[fieldValue(name="pos", value=[431.20001220703125,0.10000000149011612,-361.20001220703125])
])]),
Anchor(url=["javascript:window.open('./data/612.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], description="City Arts", children=[
ProtoInstance(name="i", fieldValue=[fieldValue(name="pos", value=[455.8999938964844,0.10000000149011612,-341.29998779296875])
])]),
Anchor(url=["javascript:window.open('./data/615.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], description="Indigo Dance Group (Salamanda Tandem)", children=[
ProtoInstance(name="r", fieldValue=[fieldValue(name="pos", value=[456.1000061035156,0.10000000149011612,-341.5])
])]),
Anchor(url=["javascript:window.open('./data/623.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], description="Watering Seeds", children=[
ProtoInstance(name="r", fieldValue=[fieldValue(name="pos", value=[454,0.10000000149011612,-361.29998779296875])
])]),
Anchor(url=["javascript:window.open('./data/625.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], description="Red oaks", children=[
ProtoInstance(name="institute", fieldValue=[fieldValue(name="pos", value=[457.3999938964844,0.10000000149011612,-359.6000061035156])
])]),
Anchor(url=["javascript:window.open('./data/626.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], description="West Notts College", children=[
ProtoInstance(name="school", fieldValue=[fieldValue(name="pos", value=[454.20001220703125,0.10000000149011612,-358.6000061035156])
])]),
Anchor(url=["javascript:window.open('./data/628.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], description="Willow Wood Day Centre", children=[
ProtoInstance(name="institute", fieldValue=[fieldValue(name="pos", value=[450.6000061035156,0.10000000149011612,-358.6000061035156])
])]),
Anchor(url=["javascript:window.open('./data/630.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], description="Fased In The Arts", children=[
ProtoInstance(name="r", fieldValue=[fieldValue(name="pos", value=[440,0.10000000149011612,-350])
])]),
Anchor(url=["javascript:window.open('./data/633.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], description="27a Access Artspace", children=[
ProtoInstance(name="n", fieldValue=[fieldValue(name="pos", value=[458.8999938964844,0.10000000149011612,-304.29998779296875])
])]),
Anchor(url=["javascript:window.open('./data/635.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], description="Roman Way Day Centre, Market Harborough", children=[
ProtoInstance(name="institute", fieldValue=[fieldValue(name="pos", value=[473.5,0.10000000149011612,-287.5])
])]),
Anchor(url=["javascript:window.open('./data/637.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], description="Mosaic, Leicester Disability Services", children=[
ProtoInstance(name="institute", fieldValue=[fieldValue(name="pos", value=[458,0.10000000149011612,-304.5])
])]),
Anchor(url=["javascript:window.open('./data/638.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], description="Bamboozle Theatre Company", children=[
ProtoInstance(name="r", fieldValue=[fieldValue(name="pos", value=[457.1000061035156,0.10000000149011612,-300.79998779296875])
])]),
Anchor(url=["javascript:window.open('./data/640.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], description="Ellesmere College, Leicester", children=[
ProtoInstance(name="school", fieldValue=[fieldValue(name="pos", value=[456.79998779296875,0.10000000149011612,-302.6000061035156])
])]),
Anchor(url=["javascript:window.open('./data/642.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], description="Ashmount School, Loughborough", children=[
ProtoInstance(name="school", fieldValue=[fieldValue(name="pos", value=[453.29998779296875,0.10000000149011612,-318.6000061035156])
])]),
Anchor(url=["javascript:window.open('./data/648.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], description="Mantle Community Arts", children=[
ProtoInstance(name="r", fieldValue=[fieldValue(name="pos", value=[442.3999938964844,0.10000000149011612,-314.5])
])]),
Anchor(url=["javascript:window.open('./data/650.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], description="Forrest Way School", children=[
ProtoInstance(name="school", fieldValue=[fieldValue(name="pos", value=[444.6000061035156,0.10000000149011612,-313.70001220703125])
])]),
Anchor(url=["javascript:window.open('./data/652.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], description="Ibstock Community College", children=[
ProtoInstance(name="school", fieldValue=[fieldValue(name="pos", value=[440.6000061035156,0.10000000149011612,-310.3999938964844])
])]),
Anchor(url=["javascript:window.open('./data/658.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], description="Artlink East", children=[
ProtoInstance(name="r", fieldValue=[fieldValue(name="pos", value=[491.6000061035156,0.10000000149011612,-335.70001220703125])
])]),
Anchor(url=["javascript:window.open('./data/660.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], description="United Hospitals and NHS Trust Lincolnshire", children=[
ProtoInstance(name="institute", fieldValue=[fieldValue(name="pos", value=[491.3999938964844,0.10000000149011612,-336.79998779296875])
])]),
Anchor(url=["javascript:window.open('./data/662.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], description="Ancaster Day Centre", children=[
ProtoInstance(name="institute", fieldValue=[fieldValue(name="pos", value=[496.8999938964844,0.10000000149011612,-368.8999938964844])
])]),
Anchor(url=["javascript:window.open('./data/665.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], description="Creations", children=[
ProtoInstance(name="r", fieldValue=[fieldValue(name="pos", value=[467,0.10000000149011612,-243.89999389648438])
])]),
Anchor(url=["javascript:window.open('./data/667.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], description="Nene Day Centre, Northamtpon", children=[
ProtoInstance(name="institute", fieldValue=[fieldValue(name="pos", value=[477.1000061035156,0.10000000149011612,-260])
])]),
Anchor(url=["javascript:window.open('./data/668.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], description="Delapre Middle School, Northampton", children=[
ProtoInstance(name="school", fieldValue=[fieldValue(name="pos", value=[474.70001220703125,0.10000000149011612,-259.1000061035156])
])]),
Anchor(url=["javascript:window.open('./data/669.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], description="The Links, Brackley", children=[
ProtoInstance(name="institute", fieldValue=[fieldValue(name="pos", value=[459,0.10000000149011612,-236.39999389648438])
])]),
Anchor(url=["javascript:window.open('./data/670.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], description="New Perspectives", children=[
ProtoInstance(name="n", fieldValue=[fieldValue(name="pos", value=[457.3999938964844,0.10000000149011612,-262.70001220703125])
])]),
Anchor(url=["javascript:window.open('./data/671.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], description="UKan2", children=[
ProtoInstance(name="r", fieldValue=[fieldValue(name="pos", value=[458.70001220703125,0.10000000149011612,-262.70001220703125])
])]),
Anchor(url=["javascript:window.open('./data/672.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], description="Silverstone County Infants School", children=[
ProtoInstance(name="school", fieldValue=[fieldValue(name="pos", value=[466.8999938964844,0.10000000149011612,-243.8000030517578])
])]),
Anchor(url=["javascript:window.open('./data/677.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], description="Riverside Resource Centre, Towcester", children=[
ProtoInstance(name="institute", fieldValue=[fieldValue(name="pos", value=[469.5,0.10000000149011612,-249.8000030517578])
])]),
Anchor(url=["javascript:window.open('./data/678.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"], description="Daventry Tertiary College", children=[
ProtoInstance(name="school", fieldValue=[fieldValue(name="pos", value=[456.70001220703125,0.10000000149011612,-261.79998779296875])
])]),
Shape(
appearance=
Appearance(
material=
Material(transparency=0.20000000298023224, emissiveColor=((1,0,0)))), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1,2,3,-1,4,5,-1,6,7,-1,8,9,-1,10,11,-1,12,13,-1,14,15,-1,16,17,-1,18,19,-1,20,21,-1,22,23,-1,24,25,-1,26,27,-1,28,29,-1,30,31,-1,32,33,-1,34,35,-1], 
coord=
Coordinate(point=[(430,0.019999999552965164,-335),(435.79998779296875,0.10000000149011612,-335.29998779296875),(430,0.019999999552965164,-335),(434.6000061035156,0.10000000149011612,-338.6000061035156),(430,0.019999999552965164,-335),(432.70001220703125,0.10000000149011612,-336.6000061035156),(430,0.019999999552965164,-335),(434.70001220703125,0.10000000149011612,-336.8999938964844),(429.8999938964844,0.019999999552965164,-360.29998779296875),(474.70001220703125,0.10000000149011612,-318.79998779296875),(429.8999938964844,0.019999999552965164,-360.29998779296875),(485.6000061035156,0.10000000149011612,-309),(429.8999938964844,0.019999999552965164,-360.29998779296875),(434.79998779296875,0.10000000149011612,-371.5),(454,0.019999999552965164,-361.29998779296875),(457.3999938964844,0.10000000149011612,-359.6000061035156),(454,0.019999999552965164,-361.29998779296875),(454.20001220703125,0.10000000149011612,-358.6000061035156),(454,0.019999999552965164,-361.29998779296875),(450.6000061035156,0.10000000149011612,-358.6000061035156),(458.8999938964844,0.019999999552965164,-304.29998779296875),(473.5,0.10000000149011612,-287.5),(458.8999938964844,0.019999999552965164,-304.29998779296875),(458,0.10000000149011612,-304.5),(491.6000061035156,0.019999999552965164,-335.70001220703125),(491.3999938964844,0.10000000149011612,-336.79998779296875),(491.6000061035156,0.019999999552965164,-335.70001220703125),(496.8999938964844,0.10000000149011612,-368.8999938964844),(467,0.019999999552965164,-243.89999389648438),(477.1000061035156,0.10000000149011612,-260),(467,0.019999999552965164,-243.89999389648438),(459,0.10000000149011612,-236.39999389648438),(458.70001220703125,0.019999999552965164,-262.70001220703125),(469.5,0.10000000149011612,-249.8000030517578),(458.70001220703125,0.019999999552965164,-262.70001220703125),(456.70001220703125,0.10000000149011612,-261.79998779296875)]))),
Shape(
appearance=
Appearance(
material=
Material(transparency=0.20000000298023224, emissiveColor=((0,1,0)))), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1,2,3,-1,4,5,-1,6,7,-1,8,9,-1,10,11,-1,12,13,-1,14,15,-1,16,17,-1,18,19,-1,20,21,-1,22,23,-1,24,25,-1,26,27,-1,28,29,-1,30,31,-1,32,33,-1,34,35,-1], 
coord=
Coordinate(point=[(400,0.019999999552965164,-385),(400.6000061035156,0.10000000149011612,-392.8999938964844),(400,0.019999999552965164,-385),(416.70001220703125,0.10000000149011612,-383.3999938964844),(430,0.019999999552965164,-335),(438.29998779296875,0.10000000149011612,-338.6000061035156),(430,0.019999999552965164,-335),(434.79998779296875,0.10000000149011612,-336),(430,0.019999999552965164,-335),(437.6000061035156,0.10000000149011612,-332.6000061035156),(430,0.019999999552965164,-335),(436.29998779296875,0.10000000149011612,-333.3999938964844),(430,0.019999999552965164,-335),(435.20001220703125,0.10000000149011612,-336.79998779296875),(430,0.019999999552965164,-335),(432.5,0.10000000149011612,-332.5),(429.8999938964844,0.019999999552965164,-360.29998779296875),(436.1000061035156,0.10000000149011612,-334.8999938964844),(429.8999938964844,0.019999999552965164,-360.29998779296875),(440.5,0.10000000149011612,-355.5),(429.8999938964844,0.019999999552965164,-360.29998779296875),(436.29998779296875,0.10000000149011612,-371.70001220703125),(429.8999938964844,0.019999999552965164,-360.29998779296875),(431.20001220703125,0.10000000149011612,-361.20001220703125),(457.1000061035156,0.019999999552965164,-300.79998779296875),(456.79998779296875,0.10000000149011612,-302.6000061035156),(457.1000061035156,0.019999999552965164,-300.79998779296875),(453.29998779296875,0.10000000149011612,-318.6000061035156),(442.3999938964844,0.019999999552965164,-314.5),(444.6000061035156,0.10000000149011612,-313.70001220703125),(442.3999938964844,0.019999999552965164,-314.5),(440.6000061035156,0.10000000149011612,-310.3999938964844),(467,0.019999999552965164,-243.89999389648438),(474.70001220703125,0.10000000149011612,-259.1000061035156),(457.3999938964844,0.019999999552965164,-262.70001220703125),(466.8999938964844,0.10000000149011612,-243.8000030517578)]))),
Shape(
appearance=
Appearance(
material=
Material(transparency=0.20000000298023224, emissiveColor=((1,0,1)))), 
geometry=
IndexedLineSet(coordIndex=[0,1,-1,2,3,-1,4,5,-1,6,7,-1,8,9,-1], 
coord=
Coordinate(point=[(430,0.019999999552965164,-335),(429.8999938964844,0.10000000149011612,-360.29998779296875),(442.3999938964844,0.019999999552965164,-314.5),(429.8999938964844,0.10000000149011612,-319.6000061035156),(457.3999938964844,0.019999999552965164,-262.70001220703125),(467,0.10000000149011612,-243.89999389648438),(458.70001220703125,0.019999999552965164,-262.70001220703125),(457.3999938964844,0.10000000149011612,-262.70001220703125),(458.70001220703125,0.019999999552965164,-262.70001220703125),(467,0.10000000149011612,-243.89999389648438)])))])]))
.XML())
