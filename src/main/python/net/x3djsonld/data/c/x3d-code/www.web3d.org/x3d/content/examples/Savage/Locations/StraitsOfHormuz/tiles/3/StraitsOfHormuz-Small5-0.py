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

newModel=X3D(profile='Immersive',version='3.1',
  head=head(
    children=[
    component(name='Geospatial',level=1)]),
  Scene=Scene(
    children=[
    GeoViewpoint(description='GeoViewpoint_3_50',geoSystem=['GDC'],position=(26.681944553228952,55.27711712740383,29163.6915586987),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(26.3456597347756,56.33160427093061,0),geoSystem=['GDC'])),
    GeoLOD(center=(26.681944553228952,55.27711712740383,0.0),range=34996.43,child1Url=['../../tiles/4/StraitsOfHormuz-Small10-0.x3d'],child2Url=['../../tiles/4/StraitsOfHormuz-Small10-1.x3d'],child3Url=['../../tiles/4/StraitsOfHormuz-Small11-0.x3d'],child4Url=['../../tiles/4/StraitsOfHormuz-Small11-1.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/StraitsOfHormuz-Small5-0.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(26.569849613744502,55.1264761069,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0143467635,zDimension=22,zSpacing=0.010675709,height=[0,0,4,2,1,2,0,2,0,0,4,3,3,0,0,0,0,9,6,0,-2,-2,1,4,0,0,4,0,2,0,2,4,6,10,15,-4,-1,8,2,2,-2,-13,6,7,3,1,6,0,0,2,0,-2,0,0,17,9,21,18,1,5,5,4,0,2,0,3,0,-1,0,1,0,0,0,0,2,1,12,24,15,24,6,4,19,10,3,12,0,0,0,3,0,0,3,1,0,0,0,3,7,11,29,28,7,4,20,10,10,11,14,24,0,0,2,1,0,0,1,0,2,1,8,37,22,94,135,139,43,11,19,15,22,19,3,1,1,-3,0,1,0,0,7,0,1,33,40,72,97,94,19,16,19,23,26,23,1,0,0,3,0,0,4,3,1,-3,6,8,26,22,52,19,14,18,24,19,31,25,0,0,6,-2,0,1,2,0,2,4,2,21,33,6,7,13,18,9,10,13,77,111,1,0,-1,0,0,2,3,1,0,2,13,6,7,7,2,2,6,25,14,11,15,16,0,0,1,0,0,0,0,0,3,7,9,0,2,4,-1,5,1,0,10,7,13,12,3,0,3,1,0,0,0,2,0,1,0,2,0,5,2,0,4,8,7,7,6,6,2,0,0,1,0,0,1,0,0,3,2,4,0,0,4,2,12,-1,8,-11,-2,3,0,1,1,2,0,0,0,0,3,2,0,2,2,3,2,0,3,1,9,4,9,2,1,5,2,3,4,0,0,0,0,0,0,0,2,0,2,0,-1,0,-1,3,5,5,86,13,1,-5,4,0,0,0,0,0,0,1,4,1,0,0,4,3,3,3,2,4,151,37,1,3,3,0,2,0,0,3,0,0,1,3,2,0,1,-1,3,6,4,1,186,238,123,9,7,7,0,1,1,1,0,2,2,2,3,1,-1,0,1,4,2,0,355,141,60,14,13,10,10,3,-2,0,4,1,0,6,2,5,2,1,-3,3,5,10,196,180,112,69,16,41,8,-1,2,-3,3,3,3,0,0,0,2,2,-7,3,3,4,124,82,63,37,50,31,23,5,0,0,-2,0,0,-1,-1,1,4,3,3,3,3,0,115,86,62,40,48,32,23,7,0,0,-2,0,0,2,0,1,3,4,2,0,1,0],
            geoOrigin=GeoOrigin(USE='ORIGIN')))])])])
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
