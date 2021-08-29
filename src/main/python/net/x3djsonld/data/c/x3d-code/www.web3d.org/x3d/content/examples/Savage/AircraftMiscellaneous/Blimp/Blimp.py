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
    meta(content='Blimp.x3d',name='title'),
    meta(content='Michael Hadley',name='creator'),
    meta(content='3 September 2000',name='created'),
    meta(content='13 December 2014',name='modified'),
    meta(content='A floating blimp with cockpit and engine mount.',name='description'),
    meta(content='https://savage.nps.edu/Savage/AircraftMiscellaneous/Blimp/Blimp.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Viewpoint(description='Blimp from starboard side',orientation=(1,0,0,-0.25),position=(0,20,60)),
    Viewpoint(description='Blimp cockpit',position=(0,-10,15)),
    Viewpoint(description='Blimp from behind, below',orientation=(0,1,0,-1.570796),position=(-80,-12,0)),
    #  Sky Definition 
    Background(groundAngle=[1.309,1.570796],groundColor=[(0.1,0.1,0),(0.4,0.25,0.2),(0.6,0.6,0.6)],skyAngle=[1.309,1.571],skyColor=[(0,0.3,0.8),(0,0.5,1),(1,1,1)]),
    #  Blimp 
    Transform(DEF='Blimp_Main_Body',
      children=[
      Shape(
        appearance=Appearance(
          material=Material(),),
        geometry=Extrusion(DEF='Blimp_Body',creaseAngle=1.396263,crossSection=[(10,0),(9.2,-3.8),(7.1,-7.1),(3.8,-9.2),(0,-10),(-3.8,-9.2),(-7.1,-7.1),(-9.2,-3.8),(-10,-0),(-9.2,3.8),(-7.1,7.1),(-3.8,9.2),(0,10),(3.8,9.2),(7.1,7.1),(9.2,3.8),(10,0)],scale=[(0.1,0.1),(0.45,0.45),(0.65,0.65),(0.75,0.75),(0.85,0.8),(0.95,0.8),(0.975,0.8),(1,0.8),(0.9,0.8),(0.83,0.8),(0.66,0.6),(0.5,0.4),(0.3,0.2),(0.01,0.01)],solid=False,spine=[(30,0,0),(28,0,0),(26,0,0),(24,0,0),(22,0,0),(20,0,0),(18,0,0),(0,0,0),(-20,0,0),(-23,0,0),(-26,0,0),(-29,0,0),(-32,0,0),(-35,0,0)])),
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0,0,0))),
        geometry=Extrusion(DEF='Blimp_Vert_Fin',creaseAngle=0.25,crossSection=[(11,0.5),(-11,0.5),(-11,-0.5),(11,-0.5),(11,0.5)],scale=[(0.01,0.01),(0.95,0.95),(1,1)],solid=False,spine=[(-21,0,0),(-27,0,0),(-33,0,0)])),
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0,0,0))),
        geometry=Extrusion(DEF='Blimp_Horz_Fin',creaseAngle=0.25,crossSection=[(0.5,11),(0.5,-11),(-0.5,-11),(-0.5,11),(0.5,11)],scale=[(0.01,0.01),(0.95,0.95),(1,1)],solid=False,spine=[(-21,0,0),(-27,0,0),(-33,0,0)])),
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(.5,.5,.5))),
        geometry=Extrusion(DEF='Blimp_cockpit_top',ccw=False,creaseAngle=1.396263,crossSection=[(0,2),(-3,1),(-4,0),(-3,-1),(0,-2),(4,-2),(4,2),(0,2)],solid=False,spine=[(0,-9.75,0),(0,-10.5,0)])),
      Transform(scale=(1.02,1,1.02),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.458824,0.788235,1))),
          geometry=Extrusion(DEF='Blimp_cockpit_glass',creaseAngle=1.396263,crossSection=[(0,2),(-3,1),(-4,0),(-3,-1),(0,-2),(4,-2),(4,2),(0,2)],solid=False,spine=[(0,-10.5,0),(0,-11.5,0)]))]),
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(.5,.5,.5))),
        geometry=Extrusion(DEF='Blimp_cockpit_bottom',ccw=False,creaseAngle=1.396263,crossSection=[(0,2),(-3,1),(-4,0),(-3,-1),(0,-2),(4,-2),(4,2),(0,2)],solid=False,spine=[(0,-11.5,0),(0,-12.5,0)])),
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(.5,.5,.5))),
        geometry=Extrusion(DEF='Blimp_engine_mount',convex=False,crossSection=[(-4,2),(-6,2),(-6,-2),(-4,-2)],solid=False,spine=[(-10,-9.5,0),(-10,-12.75,0)]))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Blimp.py")
