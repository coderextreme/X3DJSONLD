###############################################
#
# Now available: developmental python x3d.py package on PyPi for import.
#   This approach greatly simplifies Python X3D deployment and use.
#   https://pypi.org/project/x3d
#
# Installation:
#       pip install x3d
# or
#       python -m pip install x3d
#
# Developer options for loading x3d package:
#
#    from x3d import *  # preferred approach, terser source that avoids x3d.* class prefixes
#
# or
#    import x3d         # traditional way to subclass x3d package, all classes require x3d.* prefix
#                       # but python source is very verbose, for example x3d.Material x3d.Shape etc.
#                       # X3dToPython.xslt stylesheet insertPackagePrefix=true supports this option.

from x3d import *

###############################################

newModel=X3D(profile='Interchange',version='3.0',
  head=head(
    children=[
    meta(name='generator',content='view3dscene, https://castle-engine.io/view3dscene.php'),
    meta(name='source',content='t1.wrl')]),
  Scene=Scene(
    children=[
    NavigationInfo(type=["EXAMINE","FLY","WALK"],speed=3,avatarSize=[200,200,120]),
    WorldInfo(title='Arts Mapper'),
    Viewpoint(description='looking North',position=(0,60,110),orientation=(1,0,0,-0.699999988079071),fieldOfView=0.785398125648499),
    Viewpoint(description='looking East',position=(-140,30,0),orientation=(0,0.400000005960464,0,-1.39999997615814),fieldOfView=0.785398125648499),
    Viewpoint(description='Overhead',position=(0,150,0),orientation=(1,0,0,-1.57000005245209),fieldOfView=0.785398125648499),
    ProtoDeclare(name='school',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='initializeOnly',type='SFVec3f',name='pos',value=(0,0,0))]),
      ProtoBody=ProtoBody(
        children=[
        Transform(
          children=[
          Shape(
            appearance=Appearance(
              material=Material(transparency=0.200000002980232,diffuseColor=(0.5,0,1))),
            geometry=IndexedFaceSet(coordIndex=[0,1,4,-1,1,2,4,-1,2,3,4,-1,3,0,4,-1,0,3,2,1,-1],
              coord=Coordinate(point=[(-0.349999994039536,-0.349999994039536,0.349999994039536),(0.349999994039536,-0.349999994039536,0.349999994039536),(0.349999994039536,-0.349999994039536,-0.349999994039536),(-0.349999994039536,-0.349999994039536,-0.349999994039536),(0,0.349999994039536,0)])))],
          IS=IS(
            connect=[
            connect(nodeField='translation',protoField='pos')]))])),
    ProtoDeclare(name='institute',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='initializeOnly',type='SFVec3f',name='pos',value=(0,0,0))]),
      ProtoBody=ProtoBody(
        children=[
        Transform(
          children=[
          Shape(
            appearance=Appearance(
              material=Material(transparency=0.200000002980232,diffuseColor=(1,1,0))),
            geometry=Box(size=(0.699999988079071,0.699999988079071,0.699999988079071)))],
          IS=IS(
            connect=[
            connect(nodeField='translation',protoField='pos')]))])),
    ProtoDeclare(name='disart_org',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='initializeOnly',type='SFVec3f',name='pos',value=(0,0,0))]),
      ProtoBody=ProtoBody(
        children=[
        Transform(
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(1,1,0))),
            geometry=Sphere(radius=0.699999988079071))],
          IS=IS(
            connect=[
            connect(nodeField='translation',protoField='pos')]))])),
    ProtoDeclare(name='org',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='initializeOnly',type='SFVec3f',name='posi',value=(0,0,0)),
        field(accessType='initializeOnly',type='SFColor',name='col',value=(0,0,0))]),
      ProtoBody=ProtoBody(
        children=[
        Transform(
          children=[
          Shape(
            appearance=Appearance(
              material=Material(transparency=0.400000005960464,
                IS=IS(
                  connect=[
                  connect(nodeField='emissiveColor',protoField='col')]))),
            geometry=Sphere(radius=1.10000002384186))],
          IS=IS(
            connect=[
            connect(nodeField='translation',protoField='posi')]))])),
    ProtoDeclare(name='l',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='initializeOnly',type='SFVec3f',name='pos',value=(0,0,0))]),
      ProtoBody=ProtoBody(
        children=[
        ProtoInstance(name='org',
          fieldValue=[
          fieldValue(name='col',value=(0,0.600000023841858,0))],
          IS=IS(
            connect=[
            connect(nodeField='posi',protoField='pos')]))])),
    ProtoDeclare(name='r',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='initializeOnly',type='SFVec3f',name='pos',value=(0,0,0))]),
      ProtoBody=ProtoBody(
        children=[
        ProtoInstance(name='org',
          fieldValue=[
          fieldValue(name='col',value=(0,0.300000011920929,1))],
          IS=IS(
            connect=[
            connect(nodeField='posi',protoField='pos')]))])),
    ProtoDeclare(name='n',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='initializeOnly',type='SFVec3f',name='pos',value=(0,0,0))]),
      ProtoBody=ProtoBody(
        children=[
        ProtoInstance(name='org',
          fieldValue=[
          fieldValue(name='col',value=(1,0,0.200000002980232))],
          IS=IS(
            connect=[
            connect(nodeField='posi',protoField='pos')]))])),
    ProtoDeclare(name='i',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='initializeOnly',type='SFVec3f',name='pos',value=(0,0,0))]),
      ProtoBody=ProtoBody(
        children=[
        ProtoInstance(name='org',
          fieldValue=[
          fieldValue(name='col',value=(0.600000023841858,0,0.600000023841858))],
          IS=IS(
            connect=[
            connect(nodeField='posi',protoField='pos')]))])),
    Transform(translation=(-468,0,315),
      children=[
      Inline(url=["t.wrl"]),
      Anchor(url=["javascript:window.open(\'./data/566.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');"],description="Derby Women's Centre",
        children=[
        ProtoInstance(name='institute',
          fieldValue=[
          fieldValue(name='pos',value=(435.299987792969,0.100000001490116,-335.600006103516))])]),
      Anchor(url=["javascript:window.open(\'./data/574.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');"],description='High Peak Community Arts',
        children=[
        ProtoInstance(name='r',
          fieldValue=[
          fieldValue(name='pos',value=(400,0.100000001490116,-385))])]),
      Anchor(url=["javascript:window.open(\'./data/576.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');"],description='Charlesworth Primary School',
        children=[
        ProtoInstance(name='school',
          fieldValue=[
          fieldValue(name='pos',value=(400.600006103516,0.100000001490116,-392.899993896484))])]),
      Anchor(url=["javascript:window.open(\'./data/579.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');"],description='Hope Valley College',
        children=[
        ProtoInstance(name='school',
          fieldValue=[
          fieldValue(name='pos',value=(416.700012207031,0.100000001490116,-383.399993896484))])]),
      Anchor(url=["javascript:window.open(\'./data/583.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');"],description='People Express',
        children=[
        ProtoInstance(name='i',
          fieldValue=[
          fieldValue(name='pos',value=(429.899993896484,0.100000001490116,-319.600006103516))])]),
      Anchor(url=["javascript:window.open(\'./data/589.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');"],description='QArts/Studios',
        children=[
        ProtoInstance(name='i',
          fieldValue=[
          fieldValue(name='pos',value=(430,0.100000001490116,-335))])]),
      Anchor(url=["javascript:window.open(\'./data/591.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');"],description='Stroke Unit, Derbyshire Royal Infirmary',
        children=[
        ProtoInstance(name='institute',
          fieldValue=[
          fieldValue(name='pos',value=(435.799987792969,0.100000001490116,-335.299987792969))])]),
      Anchor(url=["javascript:window.open(\'./data/592.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');"],description='Park View Primary, Derby',
        children=[
        ProtoInstance(name='school',
          fieldValue=[
          fieldValue(name='pos',value=(438.299987792969,0.100000001490116,-338.600006103516))])]),
      Anchor(url=["javascript:window.open(\'./data/593.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');"],description='First Movement',
        children=[
        ProtoInstance(name='n',
          fieldValue=[
          fieldValue(name='pos',value=(429.899993896484,0.100000001490116,-360.299987792969))])]),
      Anchor(url=["javascript:window.open(\'./data/594.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');"],description='St. Benedict R.C. School, Visual Impairment Unit',
        children=[
        ProtoInstance(name='institute',
          fieldValue=[
          fieldValue(name='pos',value=(434.600006103516,0.100000001490116,-338.600006103516))])]),
      Anchor(url=["javascript:window.open(\'./data/595.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');"],description='Beckett Primary, Derby',
        children=[
        ProtoInstance(name='school',
          fieldValue=[
          fieldValue(name='pos',value=(434.799987792969,0.100000001490116,-336))])]),
      Anchor(url=["javascript:window.open(\'./data/597.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');"],description='Brackensdale Junior School, Communty Unit',
        children=[
        ProtoInstance(name='institute',
          fieldValue=[
          fieldValue(name='pos',value=(432.700012207031,0.100000001490116,-336.600006103516))])]),
      Anchor(url=["javascript:window.open(\'./data/598.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');"],description='Moorhead Primary, Derby',
        children=[
        ProtoInstance(name='school',
          fieldValue=[
          fieldValue(name='pos',value=(437.600006103516,0.100000001490116,-332.600006103516))])]),
      Anchor(url=["javascript:window.open(\'./data/600.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');"],description='Derby Deaf Club',
        children=[
        ProtoInstance(name='institute',
          fieldValue=[
          fieldValue(name='pos',value=(434.700012207031,0.100000001490116,-336.899993896484))])]),
      Anchor(url=["javascript:window.open(\'./data/601.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');"],description='Nightingale Junior, Derby',
        children=[
        ProtoInstance(name='school',
          fieldValue=[
          fieldValue(name='pos',value=(436.299987792969,0.100000001490116,-333.399993896484))])]),
      Anchor(url=["javascript:window.open(\'./data/603.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');"],description="St Mary's Primary, Derby",
        children=[
        ProtoInstance(name='school',
          fieldValue=[
          fieldValue(name='pos',value=(435.200012207031,0.100000001490116,-336.799987792969))])]),
      Anchor(url=["javascript:window.open(\'./data/604.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');"],description='Griffe Field Primary, Derby',
        children=[
        ProtoInstance(name='school',
          fieldValue=[
          fieldValue(name='pos',value=(432.5,0.100000001490116,-332.5))])]),
      Anchor(url=["javascript:window.open(\'./data/605.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');"],description='Leicester Road Day Centre, Melton Mowbray',
        children=[
        ProtoInstance(name='institute',
          fieldValue=[
          fieldValue(name='pos',value=(474.700012207031,0.100000001490116,-318.799987792969))])]),
      Anchor(url=["javascript:window.open(\'./data/606.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');"],description='Ivy House Special School, Derby',
        children=[
        ProtoInstance(name='school',
          fieldValue=[
          fieldValue(name='pos',value=(436.100006103516,0.100000001490116,-334.899993896484))])]),
      Anchor(url=["javascript:window.open(\'./data/607.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');"],description='Oakham Day Centre, Rutland',
        children=[
        ProtoInstance(name='institute',
          fieldValue=[
          fieldValue(name='pos',value=(485.600006103516,0.100000001490116,-309))])]),
      Anchor(url=["javascript:window.open(\'./data/608.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');"],description='Parkwood School, Alfreton',
        children=[
        ProtoInstance(name='school',
          fieldValue=[
          fieldValue(name='pos',value=(440.5,0.100000001490116,-355.5))])]),
      Anchor(url=["javascript:window.open(\'./data/609.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');"],description='Ash Green, Specialist Learning Disability Resource',
        children=[
        ProtoInstance(name='institute',
          fieldValue=[
          fieldValue(name='pos',value=(434.799987792969,0.100000001490116,-371.5))])]),
      Anchor(url=["javascript:window.open(\'./data/610.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');"],description='Ashgate Croft School, Chesterfield',
        children=[
        ProtoInstance(name='school',
          fieldValue=[
          fieldValue(name='pos',value=(436.299987792969,0.100000001490116,-371.700012207031))])]),
      Anchor(url=["javascript:window.open(\'./data/611.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');"],description='Highfields School, Matlock',
        children=[
        ProtoInstance(name='school',
          fieldValue=[
          fieldValue(name='pos',value=(431.200012207031,0.100000001490116,-361.200012207031))])]),
      Anchor(url=["javascript:window.open(\'./data/612.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');"],description='City Arts',
        children=[
        ProtoInstance(name='i',
          fieldValue=[
          fieldValue(name='pos',value=(455.899993896484,0.100000001490116,-341.299987792969))])]),
      Anchor(url=["javascript:window.open(\'./data/615.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');"],description='Indigo Dance Group (Salamanda Tandem)',
        children=[
        ProtoInstance(name='r',
          fieldValue=[
          fieldValue(name='pos',value=(456.100006103516,0.100000001490116,-341.5))])]),
      Anchor(url=["javascript:window.open(\'./data/623.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');"],description='Watering Seeds',
        children=[
        ProtoInstance(name='r',
          fieldValue=[
          fieldValue(name='pos',value=(454,0.100000001490116,-361.299987792969))])]),
      Anchor(url=["javascript:window.open(\'./data/625.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');"],description='Red oaks',
        children=[
        ProtoInstance(name='institute',
          fieldValue=[
          fieldValue(name='pos',value=(457.399993896484,0.100000001490116,-359.600006103516))])]),
      Anchor(url=["javascript:window.open(\'./data/626.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');"],description='West Notts College',
        children=[
        ProtoInstance(name='school',
          fieldValue=[
          fieldValue(name='pos',value=(454.200012207031,0.100000001490116,-358.600006103516))])]),
      Anchor(url=["javascript:window.open(\'./data/628.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');"],description='Willow Wood Day Centre',
        children=[
        ProtoInstance(name='institute',
          fieldValue=[
          fieldValue(name='pos',value=(450.600006103516,0.100000001490116,-358.600006103516))])]),
      Anchor(url=["javascript:window.open(\'./data/630.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');"],description='Fased In The Arts',
        children=[
        ProtoInstance(name='r',
          fieldValue=[
          fieldValue(name='pos',value=(440,0.100000001490116,-350))])]),
      Anchor(url=["javascript:window.open(\'./data/633.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');"],description='27a Access Artspace',
        children=[
        ProtoInstance(name='n',
          fieldValue=[
          fieldValue(name='pos',value=(458.899993896484,0.100000001490116,-304.299987792969))])]),
      Anchor(url=["javascript:window.open(\'./data/635.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');"],description='Roman Way Day Centre, Market Harborough',
        children=[
        ProtoInstance(name='institute',
          fieldValue=[
          fieldValue(name='pos',value=(473.5,0.100000001490116,-287.5))])]),
      Anchor(url=["javascript:window.open(\'./data/637.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');"],description='Mosaic, Leicester Disability Services',
        children=[
        ProtoInstance(name='institute',
          fieldValue=[
          fieldValue(name='pos',value=(458,0.100000001490116,-304.5))])]),
      Anchor(url=["javascript:window.open(\'./data/638.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');"],description='Bamboozle Theatre Company',
        children=[
        ProtoInstance(name='r',
          fieldValue=[
          fieldValue(name='pos',value=(457.100006103516,0.100000001490116,-300.799987792969))])]),
      Anchor(url=["javascript:window.open(\'./data/640.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');"],description='Ellesmere College, Leicester',
        children=[
        ProtoInstance(name='school',
          fieldValue=[
          fieldValue(name='pos',value=(456.799987792969,0.100000001490116,-302.600006103516))])]),
      Anchor(url=["javascript:window.open(\'./data/642.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');"],description='Ashmount School, Loughborough',
        children=[
        ProtoInstance(name='school',
          fieldValue=[
          fieldValue(name='pos',value=(453.299987792969,0.100000001490116,-318.600006103516))])]),
      Anchor(url=["javascript:window.open(\'./data/648.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');"],description='Mantle Community Arts',
        children=[
        ProtoInstance(name='r',
          fieldValue=[
          fieldValue(name='pos',value=(442.399993896484,0.100000001490116,-314.5))])]),
      Anchor(url=["javascript:window.open(\'./data/650.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');"],description='Forrest Way School',
        children=[
        ProtoInstance(name='school',
          fieldValue=[
          fieldValue(name='pos',value=(444.600006103516,0.100000001490116,-313.700012207031))])]),
      Anchor(url=["javascript:window.open(\'./data/652.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');"],description='Ibstock Community College',
        children=[
        ProtoInstance(name='school',
          fieldValue=[
          fieldValue(name='pos',value=(440.600006103516,0.100000001490116,-310.399993896484))])]),
      Anchor(url=["javascript:window.open(\'./data/658.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');"],description='Artlink East',
        children=[
        ProtoInstance(name='r',
          fieldValue=[
          fieldValue(name='pos',value=(491.600006103516,0.100000001490116,-335.700012207031))])]),
      Anchor(url=["javascript:window.open(\'./data/660.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');"],description='United Hospitals and NHS Trust Lincolnshire',
        children=[
        ProtoInstance(name='institute',
          fieldValue=[
          fieldValue(name='pos',value=(491.399993896484,0.100000001490116,-336.799987792969))])]),
      Anchor(url=["javascript:window.open(\'./data/662.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');"],description='Ancaster Day Centre',
        children=[
        ProtoInstance(name='institute',
          fieldValue=[
          fieldValue(name='pos',value=(496.899993896484,0.100000001490116,-368.899993896484))])]),
      Anchor(url=["javascript:window.open(\'./data/665.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');"],description='Creations',
        children=[
        ProtoInstance(name='r',
          fieldValue=[
          fieldValue(name='pos',value=(467,0.100000001490116,-243.899993896484))])]),
      Anchor(url=["javascript:window.open(\'./data/667.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');"],description='Nene Day Centre, Northamtpon',
        children=[
        ProtoInstance(name='institute',
          fieldValue=[
          fieldValue(name='pos',value=(477.100006103516,0.100000001490116,-260))])]),
      Anchor(url=["javascript:window.open(\'./data/668.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');"],description='Delapre Middle School, Northampton',
        children=[
        ProtoInstance(name='school',
          fieldValue=[
          fieldValue(name='pos',value=(474.700012207031,0.100000001490116,-259.100006103516))])]),
      Anchor(url=["javascript:window.open(\'./data/669.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');"],description='The Links, Brackley',
        children=[
        ProtoInstance(name='institute',
          fieldValue=[
          fieldValue(name='pos',value=(459,0.100000001490116,-236.399993896484))])]),
      Anchor(url=["javascript:window.open(\'./data/670.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');"],description='New Perspectives',
        children=[
        ProtoInstance(name='n',
          fieldValue=[
          fieldValue(name='pos',value=(457.399993896484,0.100000001490116,-262.700012207031))])]),
      Anchor(url=["javascript:window.open(\'./data/671.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');"],description='UKan2',
        children=[
        ProtoInstance(name='r',
          fieldValue=[
          fieldValue(name='pos',value=(458.700012207031,0.100000001490116,-262.700012207031))])]),
      Anchor(url=["javascript:window.open(\'./data/672.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');"],description='Silverstone County Infants School',
        children=[
        ProtoInstance(name='school',
          fieldValue=[
          fieldValue(name='pos',value=(466.899993896484,0.100000001490116,-243.800003051758))])]),
      Anchor(url=["javascript:window.open(\'./data/677.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');"],description='Riverside Resource Centre, Towcester',
        children=[
        ProtoInstance(name='institute',
          fieldValue=[
          fieldValue(name='pos',value=(469.5,0.100000001490116,-249.800003051758))])]),
      Anchor(url=["javascript:window.open(\'./data/678.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');"],description='Daventry Tertiary College',
        children=[
        ProtoInstance(name='school',
          fieldValue=[
          fieldValue(name='pos',value=(456.700012207031,0.100000001490116,-261.799987792969))])]),
      Shape(
        appearance=Appearance(
          material=Material(transparency=0.200000002980232,emissiveColor=(1,0,0))),
        geometry=IndexedLineSet(coordIndex=[0,1,-1,2,3,-1,4,5,-1,6,7,-1,8,9,-1,10,11,-1,12,13,-1,14,15,-1,16,17,-1,18,19,-1,20,21,-1,22,23,-1,24,25,-1,26,27,-1,28,29,-1,30,31,-1,32,33,-1,34,35,-1],
          coord=Coordinate(point=[(430,0.0199999995529652,-335),(435.799987792969,0.100000001490116,-335.299987792969),(430,0.0199999995529652,-335),(434.600006103516,0.100000001490116,-338.600006103516),(430,0.0199999995529652,-335),(432.700012207031,0.100000001490116,-336.600006103516),(430,0.0199999995529652,-335),(434.700012207031,0.100000001490116,-336.899993896484),(429.899993896484,0.0199999995529652,-360.299987792969),(474.700012207031,0.100000001490116,-318.799987792969),(429.899993896484,0.0199999995529652,-360.299987792969),(485.600006103516,0.100000001490116,-309),(429.899993896484,0.0199999995529652,-360.299987792969),(434.799987792969,0.100000001490116,-371.5),(454,0.0199999995529652,-361.299987792969),(457.399993896484,0.100000001490116,-359.600006103516),(454,0.0199999995529652,-361.299987792969),(454.200012207031,0.100000001490116,-358.600006103516),(454,0.0199999995529652,-361.299987792969),(450.600006103516,0.100000001490116,-358.600006103516),(458.899993896484,0.0199999995529652,-304.299987792969),(473.5,0.100000001490116,-287.5),(458.899993896484,0.0199999995529652,-304.299987792969),(458,0.100000001490116,-304.5),(491.600006103516,0.0199999995529652,-335.700012207031),(491.399993896484,0.100000001490116,-336.799987792969),(491.600006103516,0.0199999995529652,-335.700012207031),(496.899993896484,0.100000001490116,-368.899993896484),(467,0.0199999995529652,-243.899993896484),(477.100006103516,0.100000001490116,-260),(467,0.0199999995529652,-243.899993896484),(459,0.100000001490116,-236.399993896484),(458.700012207031,0.0199999995529652,-262.700012207031),(469.5,0.100000001490116,-249.800003051758),(458.700012207031,0.0199999995529652,-262.700012207031),(456.700012207031,0.100000001490116,-261.799987792969)]))),
      Shape(
        appearance=Appearance(
          material=Material(transparency=0.200000002980232,emissiveColor=(0,1,0))),
        geometry=IndexedLineSet(coordIndex=[0,1,-1,2,3,-1,4,5,-1,6,7,-1,8,9,-1,10,11,-1,12,13,-1,14,15,-1,16,17,-1,18,19,-1,20,21,-1,22,23,-1,24,25,-1,26,27,-1,28,29,-1,30,31,-1,32,33,-1,34,35,-1],
          coord=Coordinate(point=[(400,0.0199999995529652,-385),(400.600006103516,0.100000001490116,-392.899993896484),(400,0.0199999995529652,-385),(416.700012207031,0.100000001490116,-383.399993896484),(430,0.0199999995529652,-335),(438.299987792969,0.100000001490116,-338.600006103516),(430,0.0199999995529652,-335),(434.799987792969,0.100000001490116,-336),(430,0.0199999995529652,-335),(437.600006103516,0.100000001490116,-332.600006103516),(430,0.0199999995529652,-335),(436.299987792969,0.100000001490116,-333.399993896484),(430,0.0199999995529652,-335),(435.200012207031,0.100000001490116,-336.799987792969),(430,0.0199999995529652,-335),(432.5,0.100000001490116,-332.5),(429.899993896484,0.0199999995529652,-360.299987792969),(436.100006103516,0.100000001490116,-334.899993896484),(429.899993896484,0.0199999995529652,-360.299987792969),(440.5,0.100000001490116,-355.5),(429.899993896484,0.0199999995529652,-360.299987792969),(436.299987792969,0.100000001490116,-371.700012207031),(429.899993896484,0.0199999995529652,-360.299987792969),(431.200012207031,0.100000001490116,-361.200012207031),(457.100006103516,0.0199999995529652,-300.799987792969),(456.799987792969,0.100000001490116,-302.600006103516),(457.100006103516,0.0199999995529652,-300.799987792969),(453.299987792969,0.100000001490116,-318.600006103516),(442.399993896484,0.0199999995529652,-314.5),(444.600006103516,0.100000001490116,-313.700012207031),(442.399993896484,0.0199999995529652,-314.5),(440.600006103516,0.100000001490116,-310.399993896484),(467,0.0199999995529652,-243.899993896484),(474.700012207031,0.100000001490116,-259.100006103516),(457.399993896484,0.0199999995529652,-262.700012207031),(466.899993896484,0.100000001490116,-243.800003051758)]))),
      Shape(
        appearance=Appearance(
          material=Material(transparency=0.200000002980232,emissiveColor=(1,0,1))),
        geometry=IndexedLineSet(coordIndex=[0,1,-1,2,3,-1,4,5,-1,6,7,-1,8,9,-1],
          coord=Coordinate(point=[(430,0.0199999995529652,-335),(429.899993896484,0.100000001490116,-360.299987792969),(442.399993896484,0.0199999995529652,-314.5),(429.899993896484,0.100000001490116,-319.600006103516),(457.399993896484,0.0199999995529652,-262.700012207031),(467,0.100000001490116,-243.899993896484),(458.700012207031,0.0199999995529652,-262.700012207031),(457.399993896484,0.100000001490116,-262.700012207031),(458.700012207031,0.0199999995529652,-262.700012207031),(467,0.100000001490116,-243.899993896484)])))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful")