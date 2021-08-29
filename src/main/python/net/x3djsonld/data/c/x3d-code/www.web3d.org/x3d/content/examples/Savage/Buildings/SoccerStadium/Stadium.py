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
    meta(content='Stadium.x3d',name='title'),
    meta(content='Complete soccer stadium, primary scene',name='description'),
    meta(content='LT Christos Kalogrias - Hellenic Navy',name='creator'),
    meta(content='15 July 2003',name='created'),
    meta(content='12 January 2014',name='modified'),
    meta(content='http://www.fussballtempel.net/uefa/Gre/Nikos_Goumas.jpg',name='reference'),
    meta(content='http://www.wsoccer.com/stadium/greece/aek_athens/',name='reference'),
    meta(content='http://www.lucia.it/vrml/group/home/ignazio/vmhome.html',name='reference'),
    meta(content='http://www.lucia.it/vrml/projects/frank/frank_e.html',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Buildings/SoccerStadium/Stadium.x3d',name='identifier'),
    meta(content='http://www.web3d.org/x3d/content/README.X3D-Edit.html',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Background(groundAngle=[1.0,1.57],groundColor=[(0.5,0.3,0.3),(0.5,0.3,0.3),(0.5,0.3,0.3)],skyAngle=[1.309,1.572],skyColor=[(0,0.5,0.7),(0,0.5,1),(1,1,1)]),
    PointLight(location=(0,5,-39)),
    PointLight(location=(0,5,0)),
    PointLight(location=(0,5,48)),
    Viewpoint(description='High View',orientation=(1,0,0,-0.5),position=(0,100,150)),
    Viewpoint(description='High View 2',orientation=(0,1,0,3.14),position=(0,20,-80)),
    Sound(intensity=0.6,maxBack=450,maxFront=450,minBack=150,minFront=150,
      source=AudioClip(DEF='PenWhistle',description='Door opening',loop=True,url=["cheer2.wav","https://savage.nps.edu/Savage/Buildings/SoccerStadium/cheer2.wav"])),
    Transform(DEF='DirtField',
      children=[
      Shape(
        appearance=Appearance(DEF='DirtCollor',
          material=Material(diffuseColor=(0.7,0,0))),
        geometry=Box(size=(80,0.05,140)))]),
    Inline(url=["./SoccerField.wrl","https://savage.nps.edu/Savage/Buildings/SoccerStadium/SoccerField.wrl"]),
    Inline(url=["./OneLevelSeats.wrl","https://savage.nps.edu/Savage/Buildings/SoccerStadium/OneLevelSeats.wrl"]),
    Inline(url=["./TwoLevelSeats.wrl","https://savage.nps.edu/Savage/Buildings/SoccerStadium/TwoLevelSeats.wrl"]),
    Transform(rotation=(0,1,0,-1),scale=(1,2,1),translation=(65,0,-53),
      children=[
      Transform(DEF='FloodLight',
        children=[
        Inline(url=["./FloodLight.wrl","https://savage.nps.edu/Savage/Buildings/SoccerStadium/FloodLight.wrl"])])]),
    Transform(rotation=(0,1,0,1),scale=(1,2,1),translation=(-65,0,-53),
      children=[
      Transform(USE='FloodLight')]),
    Transform(rotation=(0,1,0,-2),scale=(1,2,1),translation=(65,0,53),
      children=[
      Transform(USE='FloodLight')]),
    Transform(rotation=(0,1,0,2),scale=(1,2,1),translation=(-65,0,53),
      children=[
      Transform(USE='FloodLight')])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Stadium.py")
