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

newModel=X3D(profile='Immersive',version='3.0',
  head=head(
    children=[
    meta(content='YavuzFrigate.x3d',name='title'),
    meta(content='A model of Yavuz class frigates which are in active duty in Turkish Navy',name='description'),
    meta(content='Ozan APAYDIN',name='creator'),
    meta(content='1 September 2001',name='created'),
    meta(content='2 January 2019',name='modified'),
    meta(content='http://www.dzkk.tsk.mil.tr/dzkkweb/engana.htm',name='reference'),
    meta(content='http://katalog.ssm.gov.tr/indexe.htm',name='reference'),
    meta(content='s-34copy.jpg',name='Image'),
    meta(content='meko.jpg',name='Image'),
    meta(content='076759.jpg',name='Image'),
    meta(content='https://savage.nps.edu/Savage/ShipsMilitary/FrigateYavuzTurkey/YavuzFrigate.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Background(backUrl=["urn:web3d:media:textures/panoramas/ocean_2_back.jpg","ocean_2_back.jpg","../../../Basic/UniversalMediaPanoramas/ocean_2_back.jpg","http://www.web3d.org/WorkingGroups/media/textures/panoramas/ocean_2_back.jpg","http://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/ocean_2_back.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/ocean_2_back.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/ocean_2_back.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/ocean_2_back.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/ocean_2_back.jpg"],bottomUrl=["urn:web3d:media:textures/panoramas/ocean_2_bottom.jpg","ocean_2_bottom.jpg","../../../Basic/UniversalMediaPanoramas/ocean_2_bottom.jpg","http://www.web3d.org/WorkingGroups/media/textures/panoramas/ocean_2_bottom.jpg","http://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/ocean_2_bottom.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/ocean_2_bottom.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/ocean_2_bottom.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/ocean_2_bottom.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/ocean_2_bottom.jpg"],frontUrl=["urn:web3d:media:textures/panoramas/ocean_2_front.jpg","ocean_2_front.jpg","../../../Basic/UniversalMediaPanoramas/ocean_2_front.jpg","http://www.web3d.org/WorkingGroups/media/textures/panoramas/ocean_2_front.jpg","http://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/ocean_2_front.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/ocean_2_front.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/ocean_2_front.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/ocean_2_front.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/ocean_2_front.jpg"],groundAngle=[1.309,1.570796],groundColor=[(0,0,0)],leftUrl=["urn:web3d:media:textures/panoramas/ocean_2_left.jpg","ocean_2_left.jpg","../../../Basic/UniversalMediaPanoramas/ocean_2_left.jpg","http://www.web3d.org/WorkingGroups/media/textures/panoramas/ocean_2_left.jpg","http://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/ocean_2_left.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/ocean_2_left.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/ocean_2_left.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/ocean_2_left.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/ocean_2_left.jpg"],rightUrl=["urn:web3d:media:textures/panoramas/ocean_2_right.jpg","ocean_2_right.jpg","../../../Basic/UniversalMediaPanoramas/ocean_2_right.jpg","http://www.web3d.org/WorkingGroups/media/textures/panoramas/ocean_2_right.jpg","http://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/ocean_2_right.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/ocean_2_right.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/ocean_2_right.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/ocean_2_right.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/ocean_2_right.jpg"],skyAngle=[1.309,1.571],topUrl=["urn:web3d:media:textures/panoramas/ocean_2_top.jpg","ocean_2_top.jpg","../../../Basic/UniversalMediaPanoramas/ocean_2_top.jpg","http://www.web3d.org/WorkingGroups/media/textures/panoramas/ocean_2_top.jpg","http://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/ocean_2_top.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/ocean_2_top.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/ocean_2_top.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/ocean_2_top.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/ocean_2_top.jpg"]),
    Viewpoint(description='Yavuz Frigate',orientation=(-0.17,-0.98,-0.06,0.71),position=(-95,13,60)),
    Group(DEF='Viewpoints',
      children=[
      Viewpoint(description='Bow SeaZenith Front View',orientation=(0,1,0,-1.57),position=(-38,10.5,0)),
      Viewpoint(description='Bow Zenith Control View',orientation=(-0.40,0.83,0.40,1.76),position=(-27,20,0)),
      Viewpoint(description='Port Quarter SeaZenith Front View',orientation=(0,1,0,1.57),position=(50,10,8)),
      Viewpoint(description='Port Quarter SeaZenith Control View',orientation=(-0.53,-0.66,-0.53,1.98),position=(38,20,8)),
      Viewpoint(description='Starboard Quarter SeaZenith Front View',orientation=(0,1,0,1.57),position=(50,10,-8)),
      Viewpoint(description='Starboard Quarter SeaZenith Control View',orientation=(-0.53,-0.66,-0.53,1.98),position=(38,20,-8)),
      Viewpoint(description='Helicocpter Field View',orientation=(-1,0,0,0.18),position=(52.2,10,25)),
      Viewpoint(description='Main Gun Mk45 View',orientation=(-0.18,0.97,0.18,1.61),position=(-35.5,13,0))]),
    Inline(url=["Hull.x3d","https://savage.nps.edu/Savage/ShipsMilitary/FrigateYavuzTurkey/Hull.x3d","Hull.wrl","https://savage.nps.edu/Savage/ShipsMilitary/FrigateYavuzTurkey/Hull.wrl"]),
    Transform(translation=(5.0,7.0,0.0),
      children=[
      Inline(url=["SuperStructure.x3d","https://savage.nps.edu/Savage/ShipsMilitary/FrigateYavuzTurkey/SuperStructure.x3d","SuperStructure.wrl","https://savage.nps.edu/Savage/ShipsMilitary/FrigateYavuzTurkey/SuperStructure.wrl"])]),
    Transform(translation=(-30.3,10.7,0),
      children=[
      Inline(url=["SeaZenith.x3d","https://savage.nps.edu/Savage/ShipsMilitary/FrigateYavuzTurkey/SeaZenith.x3d","SeaZenith.wrl","https://savage.nps.edu/Savage/ShipsMilitary/FrigateYavuzTurkey/SeaZenith.wrl"])]),
    Transform(rotation=(0,1,0,3.14),translation=(40,10.7,-8),
      children=[
      Inline(url=["SeaZenith1.x3d","https://savage.nps.edu/Savage/ShipsMilitary/FrigateYavuzTurkey/SeaZenith1.x3d","SeaZenith1.wrl","https://savage.nps.edu/Savage/ShipsMilitary/FrigateYavuzTurkey/SeaZenith1.wrl"])]),
    Transform(rotation=(0,1,0,3.14),translation=(40,10.7,8),
      #  TODO SeaZenith1.x3d, SeaZenith2.x3d not used or variants that are still in .wrl versions? 
      children=[
      Inline(url=["SeaZenith2.x3d","https://savage.nps.edu/Savage/ShipsMilitary/FrigateYavuzTurkey/SeaZenith2.x3d","SeaZenith2.wrl","https://savage.nps.edu/Savage/ShipsMilitary/FrigateYavuzTurkey/SeaZenith2.wrl"])]),
    Transform(rotation=(0,1,0,3.14),scale=(1.4,1.4,1.4),translation=(-0.2,10,0),
      children=[
      Inline(url=["Mast.x3d","https://savage.nps.edu/Savage/ShipsMilitary/FrigateYavuzTurkey/Mast.x3d","Mast.wrl","https://savage.nps.edu/Savage/ShipsMilitary/FrigateYavuzTurkey/Mast.wrl"])]),
    Transform(rotation=(1,0,0,0.25),scale=(1.9,2.2,2.2),translation=(22.5,13.2,2.5),
      children=[
      Transform(rotation=(0,0,1,-0.1),
        children=[
        Inline(DEF='Chimney',url=["Chimney.x3d","https://savage.nps.edu/Savage/ShipsMilitary/FrigateYavuzTurkey/Chimney.x3d","Chimney.wrl","https://savage.nps.edu/Savage/ShipsMilitary/FrigateYavuzTurkey/Chimney.wrl"])])]),
    Transform(rotation=(1,0,0,-0.25),scale=(1.9,2.2,2.2),translation=(22.5,13.2,-2.5),
      children=[
      Transform(rotation=(0,0,1,-0.1),
        children=[
        Inline(USE='Chimney')])]),
    Transform(scale=(0.8,0.8,0.8),translation=(5,25,0),
      children=[
      Inline(url=["TurkishFlag.x3d","https://savage.nps.edu/Savage/ShipsMilitary/FrigateYavuzTurkey/TurkishFlag.x3d","TurkishFlag.wrl","https://savage.nps.edu/Savage/ShipsMilitary/FrigateYavuzTurkey/TurkishFlag.wrl"])]),
    Transform(translation=(2.8,20,0),
      children=[
      Shape(
        geometry=Cylinder(height=20,radius=0.02),
        appearance=Appearance(
          material=Material(diffuseColor=(1,1,1))))]),
    Transform(rotation=(1,0,0,1.57),scale=(1.8,2.5,1),translation=(52.2,5.02,0),
      children=[
      Shape(
        geometry=Box(size=(10,8,0.001)),
        appearance=Appearance(
          texture=ImageTexture(repeatS=False,repeatT=False,url=["HeliFieldText.jpg","https://savage.nps.edu/Savage/ShipsMilitary/FrigateYavuzTurkey/HeliFieldText.jpg"])))]),
    Transform(scale=(1.3,1.3,1.3),translation=(-40,7,0),
      children=[
      Inline(url=["Mk45.x3d","https://savage.nps.edu/Savage/ShipsMilitary/FrigateYavuzTurkey/Mk45.x3d","Mk45.wrl","https://savage.nps.edu/Savage/ShipsMilitary/FrigateYavuzTurkey/Mk45.wrl"])]),
    Transform(scale=(13,0.4,11),translation=(0,-1.0,0),
      children=[
      Inline(url=["Sea.x3d","https://savage.nps.edu/Savage/ShipsMilitary/FrigateYavuzTurkey/Sea.x3d","Sea.wrl","https://savage.nps.edu/Savage/ShipsMilitary/FrigateYavuzTurkey/Sea.wrl"])]),
    Transform(rotation=(0,1,0,1.57),scale=(2,2,2),translation=(8,14,0),
      children=[
      Inline(url=["HarpoonLauncher.x3d","https://savage.nps.edu/Savage/ShipsMilitary/FrigateYavuzTurkey/HarpoonLauncher.x3d","HarpoonLauncher.wrl","https://savage.nps.edu/Savage/ShipsMilitary/FrigateYavuzTurkey/HarpoonLauncher.wrl"])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for YavuzFrigate.py")
