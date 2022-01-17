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
    meta(name='title',content='t3.x3d'),
    meta(name='identifier',content='http://coderextreme.net/X3DJSONLD/src/main/data/t4.x3d'),
    meta(name='generator',content='view3dscene, https://castle-engine.io/view3dscene.php'),
    meta(name='creator',content='Andreas Plesch and John Carlson'),
    meta(name='source',content='t1.wrl'),
    meta(name='description',content='Test Case for Proto Expander'),
    meta(content='https://www.web3d.org/x3d/content/examples/license.html',name='license'),
    meta(name='translated',content='12 May 2020'),
    meta(name='generator',content='DOM2JSONSerializer.js, https://github.com/coderextreme/X3DJSONLD/blob/master/src/main/node/DOM2JSONSerializer.js'),
    meta(name='reference',content='X3D JSON encoding: https://www.web3d.org/wiki/index.php/X3D_JSON_Encoding')]),
  Scene=Scene(
    children=[
    NavigationInfo(type='"EXAMINE" "FLY" "WALK"',speed=3,avatarSize=[200,200,120]),
    WorldInfo(title='Arts Mapper'),
    Viewpoint(description='looking North',position=(0,60,110),orientation=(1,0,0,-0.699999988079071),fieldOfView=0.785398125648499),
    Transform(translation=(-468,0,315),
      children=[
      Anchor(url=["javascript:window.open(\'https://coderextreme.net/X3DJSONLD/src/main/data/574.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');","javascript:window.open(\'./data/574.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');"],description='High Peak Community Arts',
        children=[
        Transform(
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(1,1,1),emissiveColor=(0,0.300000011920929,1))),
            geometry=Sphere(radius=5.10000002384186))])]),
      Anchor(url=["javascript:window.open(\'https://coderextreme.net/X3DJSONLD/src/main/data/583.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');","javascript:window.open(\'./data/583.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');"],description='People Express',
        children=[
        Transform(
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(1,1,1),emissiveColor=(0.600000023841858,0,0.600000023841858))),
            geometry=Sphere(radius=5.10000002384186))])]),
      Anchor(url=["javascript:window.open(\'https://coderextreme.net/X3DJSONLD/src/main/data/589.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');","javascript:window.open(\'./data/589.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');"],description='QArts/Studios',
        children=[
        Transform(
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(1,1,1),emissiveColor=(0.600000023841858,0,0.600000023841858))),
            geometry=Sphere(radius=5.10000002384186))])]),
      Anchor(url=["javascript:window.open(\'https://coderextreme.net/X3DJSONLD/src/main/data/593.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');","javascript:window.open(\'./data/593.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');"],description='First Movement',
        children=[
        Transform(
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(1,1,1),emissiveColor=(1,0,0.200000002980232))),
            geometry=Sphere(radius=5.10000002384186))])]),
      Anchor(url=["javascript:window.open(\'https://coderextreme.net/X3DJSONLD/src/main/data/612.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');","javascript:window.open(\'./data/612.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');"],description='City Arts',
        children=[
        Transform(
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(1,1,1),emissiveColor=(0.600000023841858,0,0.600000023841858))),
            geometry=Sphere(radius=5.10000002384186))])]),
      Anchor(url=["javascript:window.open(\'https://coderextreme.net/X3DJSONLD/src/main/data/615.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');","javascript:window.open(\'./data/615.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');"],description='Indigo Dance Group (Salamanda Tandem)',
        children=[
        Transform(
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(1,1,1),emissiveColor=(0,0.300000011920929,1))),
            geometry=Sphere(radius=5.10000002384186))])]),
      Anchor(url=["javascript:window.open(\'https://coderextreme.net/X3DJSONLD/src/main/data/623.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');","javascript:window.open(\'./data/623.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');"],description='Watering Seeds',
        children=[
        Transform(
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(1,1,1),emissiveColor=(0,0.300000011920929,1))),
            geometry=Sphere(radius=5.10000002384186))])]),
      Anchor(url=["javascript:window.open(\'https://coderextreme.net/X3DJSONLD/src/main/data/630.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');","javascript:window.open(\'./data/630.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');"],description='Fased In The Arts',
        children=[
        Transform(
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(1,1,1),emissiveColor=(0,0.300000011920929,1))),
            geometry=Sphere(radius=5.10000002384186))])]),
      Anchor(url=["javascript:window.open(\'https://coderextreme.net/X3DJSONLD/src/main/data/633.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');","javascript:window.open(\'./data/633.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');"],description='27a Access Artspace',
        children=[
        Transform(
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(1,1,1),emissiveColor=(1,0,0.200000002980232))),
            geometry=Sphere(radius=5.10000002384186))])]),
      Anchor(url=["javascript:window.open(\'https://coderextreme.net/X3DJSONLD/src/main/data/638.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');","javascript:window.open(\'./data/638.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');"],description='Bamboozle Theatre Company',
        children=[
        Transform(
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(1,1,1),emissiveColor=(0,0.300000011920929,1))),
            geometry=Sphere(radius=5.10000002384186))])]),
      Anchor(url=["javascript:window.open(\'https://coderextreme.net/X3DJSONLD/src/main/data/648.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');","javascript:window.open(\'./data/648.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');"],description='Mantle Community Arts',
        children=[
        Transform(
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(1,1,1),emissiveColor=(0,0.300000011920929,1))),
            geometry=Sphere(radius=5.10000002384186))])]),
      Anchor(url=["javascript:window.open(\'https://coderextreme.net/X3DJSONLD/src/main/data/658.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');","javascript:window.open(\'./data/658.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');"],description='Artlink East',
        children=[
        Transform(
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(1,1,1),emissiveColor=(0,0.300000011920929,1))),
            geometry=Sphere(radius=5.10000002384186))])]),
      Anchor(url=["javascript:window.open(\'https://coderextreme.net/X3DJSONLD/src/main/data/665.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');","javascript:window.open(\'./data/665.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');"],description='Creations',
        children=[
        Transform(
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(1,1,1),emissiveColor=(0,0.300000011920929,1))),
            geometry=Sphere(radius=5.10000002384186))])]),
      Anchor(url=["javascript:window.open(\'https://coderextreme.net/X3DJSONLD/src/main/data/670.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');","javascript:window.open(\'./data/670.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');"],description='New Perspectives',
        children=[
        Transform(
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(1,1,1),emissiveColor=(1,0,0.200000002980232))),
            geometry=Sphere(radius=5.10000002384186))])]),
      Anchor(url=["javascript:window.open(\'https://coderextreme.net/X3DJSONLD/src/main/data/671.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');","javascript:window.open(\'./data/671.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');"],description='UKan2',
        children=[
        Transform(
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(1,1,1),emissiveColor=(0,0.300000011920929,1))),
            geometry=Sphere(radius=5.10000002384186))])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
# print('check newModel.XML() serialization...')
newModelXML= newModel.XML() # test export method XML() for exceptions during export
newModel.XMLvalidate()

try:
#   print('check newModel.VRML() serialization...')
    newModelVRML=newModel.VRML() # test export method VRML() for exceptions during export
    # print(prependLineNumbers(newModelVRML)) # debug
    print("Python-to-VRML export of VRML output successful")
except BaseException as err:
    print("*** Python-to-VRML export of VRML output failed:", err)
    if newModelVRML: # may have failed to generate
        print(prependLineNumbers(newModelVRML, err.lineno))

try:
#   print('check newModel.JSON() serialization...')
    newModelJSON=newModel.JSON() # test export method JSON() for exceptions during export
#   print(prependLineNumbers(newModelJSON)) # debug
    print("Python-to-JSON export of JSON output successful (still testing)")
except SyntaxError as err:
    print("*** Python-to-JSON export of JSON output failed:", err)
    if newModelJSON: # may have failed to generate
        print(prependLineNumbers(newModelJSON,err.lineno))

print("python x3d.py load and self-test complete for t3.py")
