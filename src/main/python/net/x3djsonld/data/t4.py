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

newModel=X3D(profile='Immersive',version='3.3',
  head=head(
    children=[
    component(name='Networking',level=2),
    component(name='Core',level=2),
    meta(name='title',content='t4.x3d'),
    meta(name='identifier',content='http://coderextreme.net/X3DJSONLD/src/main/data/t4.x3d'),
    meta(name='generator',content='view3dscene, https://castle-engine.io/view3dscene.php'),
    meta(name='creator',content='Andreas Plesch and John Carlson'),
    meta(name='source',content='t1.wrl'),
    meta(name='description',content='Test Case for Proto Expander'),
    meta(content='http://www.web3d.org/x3d/content/examples/license.html',name='license')]),
  Scene=Scene(
    children=[
    NavigationInfo(type=["EXAMINE","FLY","WALK"],speed=3,avatarSize=[200,200,120]),
    WorldInfo(title='Arts Mapper'),
    Viewpoint(description='looking North',position=(0,60,110),orientation=(1,0,0,-0.699999988079071),fieldOfView=0.785398125648499),
    ProtoDeclare(name='org',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='initializeOnly',type='SFVec3f',name='posi',value=(0,0,0)),
        field(accessType='initializeOnly',type='SFColor',name='col',value=(0,0,0))]),
      ProtoBody=ProtoBody(
        children=[
        Transform(
          IS=IS(
            connect=[
            connect(nodeField='translation',protoField='posi')]),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(1,1,1),
                IS=IS(
                  connect=[
                  connect(nodeField='emissiveColor',protoField='col')]))),
            geometry=Sphere(radius=5.10000002384186))])])),
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
      Anchor(url=["javascript:window.open(\'https://coderextreme.net/X3DJSONLD/src/main/data/574.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');", "javascript:window.open(\'./data/574.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');"],description='High Peak Community Arts',
        children=[
        ProtoInstance(name='r',
          fieldValue=[
          fieldValue(name='pos',value=(400,0.100000001490116,-385))])]),
      Anchor(url=["javascript:window.open(\'https://coderextreme.net/X3DJSONLD/src/main/data/583.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');", "javascript:window.open(\'./data/583.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');"],description='People Express',
        children=[
        ProtoInstance(name='i',
          fieldValue=[
          fieldValue(name='pos',value=(429.899993896484,0.100000001490116,-319.600006103516))])]),
      Anchor(url=["javascript:window.open(\'https://coderextreme.net/X3DJSONLD/src/main/data/589.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');", "javascript:window.open(\'./data/589.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');"],description='QArts/Studios',
        children=[
        ProtoInstance(name='i',
          fieldValue=[
          fieldValue(name='pos',value=(430,0.100000001490116,-335))])]),
      Anchor(url=["javascript:window.open(\'https://coderextreme.net/X3DJSONLD/src/main/data/593.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');", "javascript:window.open(\'./data/593.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');"],description='First Movement',
        children=[
        ProtoInstance(name='n',
          fieldValue=[
          fieldValue(name='pos',value=(429.899993896484,0.100000001490116,-360.299987792969))])]),
      Anchor(url=["javascript:window.open(\'https://coderextreme.net/X3DJSONLD/src/main/data/612.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');", "javascript:window.open(\'./data/612.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');"],description='City Arts',
        children=[
        ProtoInstance(name='i',
          fieldValue=[
          fieldValue(name='pos',value=(455.899993896484,0.100000001490116,-341.299987792969))])]),
      Anchor(url=["javascript:window.open(\'https://coderextreme.net/X3DJSONLD/src/main/data/615.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');", "javascript:window.open(\'./data/615.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');"],description='Indigo Dance Group (Salamanda Tandem)',
        children=[
        ProtoInstance(name='r',
          fieldValue=[
          fieldValue(name='pos',value=(456.100006103516,0.100000001490116,-341.5))])]),
      Anchor(url=["javascript:window.open(\'https://coderextreme.net/X3DJSONLD/src/main/data/623.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');", "javascript:window.open(\'./data/623.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');"],description='Watering Seeds',
        children=[
        ProtoInstance(name='r',
          fieldValue=[
          fieldValue(name='pos',value=(454,0.100000001490116,-361.299987792969))])]),
      Anchor(url=["javascript:window.open(\'https://coderextreme.net/X3DJSONLD/src/main/data/630.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');", "javascript:window.open(\'./data/630.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');"],description='Fased In The Arts',
        children=[
        ProtoInstance(name='r',
          fieldValue=[
          fieldValue(name='pos',value=(440,0.100000001490116,-350))])]),
      Anchor(url=["javascript:window.open(\'https://coderextreme.net/X3DJSONLD/src/main/data/633.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');", "javascript:window.open(\'./data/633.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');"],description='27a Access Artspace',
        children=[
        ProtoInstance(name='n',
          fieldValue=[
          fieldValue(name='pos',value=(458.899993896484,0.100000001490116,-304.299987792969))])]),
      Anchor(url=["javascript:window.open(\'https://coderextreme.net/X3DJSONLD/src/main/data/638.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');", "javascript:window.open(\'./data/638.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');"],description='Bamboozle Theatre Company',
        children=[
        ProtoInstance(name='r',
          fieldValue=[
          fieldValue(name='pos',value=(457.100006103516,0.100000001490116,-300.799987792969))])]),
      Anchor(url=["javascript:window.open(\'https://coderextreme.net/X3DJSONLD/src/main/data/648.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');", "javascript:window.open(\'./data/648.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');"],description='Mantle Community Arts',
        children=[
        ProtoInstance(name='r',
          fieldValue=[
          fieldValue(name='pos',value=(442.399993896484,0.100000001490116,-314.5))])]),
      Anchor(url=["javascript:window.open(\'https://coderextreme.net/X3DJSONLD/src/main/data/658.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');", "javascript:window.open(\'./data/658.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');"],description='Artlink East',
        children=[
        ProtoInstance(name='r',
          fieldValue=[
          fieldValue(name='pos',value=(491.600006103516,0.100000001490116,-335.700012207031))])]),
      Anchor(url=["javascript:window.open(\'https://coderextreme.net/X3DJSONLD/src/main/data/665.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');", "javascript:window.open(\'./data/665.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');"],description='Creations',
        children=[
        ProtoInstance(name='r',
          fieldValue=[
          fieldValue(name='pos',value=(467,0.100000001490116,-243.899993896484))])]),
      Anchor(url=["javascript:window.open(\'https://coderextreme.net/X3DJSONLD/src/main/data/670.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');", "javascript:window.open(\'./data/670.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');"],description='New Perspectives',
        children=[
        ProtoInstance(name='n',
          fieldValue=[
          fieldValue(name='pos',value=(457.399993896484,0.100000001490116,-262.700012207031))])]),
      Anchor(url=["javascript:window.open(\'https://coderextreme.net/X3DJSONLD/src/main/data/671.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');", "javascript:window.open(\'./data/671.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');"],description='UKan2',
        children=[
        ProtoInstance(name='r',
          fieldValue=[
          fieldValue(name='pos',value=(458.700012207031,0.100000001490116,-262.700012207031))])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for t4.py")