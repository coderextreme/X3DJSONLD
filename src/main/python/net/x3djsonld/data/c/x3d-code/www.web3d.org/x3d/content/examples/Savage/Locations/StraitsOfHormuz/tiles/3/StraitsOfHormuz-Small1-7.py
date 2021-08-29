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
    GeoViewpoint(description='GeoViewpoint_3_17',geoSystem=['GDC'],position=(25.78518503735335,57.3860914144574,29163.6915586987),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(26.3456597347756,56.33160427093061,0),geoSystem=['GDC'])),
    GeoLOD(center=(25.78518503735335,57.3860914144574,0.0),range=34996.43,child1Url=['../../tiles/4/StraitsOfHormuz-Small2-14.x3d'],child2Url=['../../tiles/4/StraitsOfHormuz-Small2-15.x3d'],child3Url=['../../tiles/4/StraitsOfHormuz-Small3-14.x3d'],child4Url=['../../tiles/4/StraitsOfHormuz-Small3-15.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/StraitsOfHormuz-Small1-7.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(25.6730900978689,57.23545039395357,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0143467635,zDimension=22,zSpacing=0.010675709,height=[7,2,0,-2,0,0,0,0,0,4,16,4,1,1,0,1,1,2,1,2,4,4,2,-4,-1,2,-1,-4,0,0,4,6,6,8,2,0,0,2,0,2,1,2,1,2,2,-5,10,4,3,0,-2,-1,-1,6,6,0,0,-1,0,2,1,0,2,1,3,3,13,0,-2,0,3,-2,-1,-1,-1,5,-2,-1,-1,0,4,1,4,0,2,1,2,1,-4,7,5,-1,1,0,4,-1,-1,-1,4,0,2,-1,2,1,0,1,3,1,1,1,-1,0,7,4,4,4,4,4,-1,-1,-6,1,-1,1,-1,0,0,0,3,0,2,2,1,0,-5,4,4,4,4,3,8,-7,-18,0,-1,0,0,1,0,2,0,2,2,0,3,16,14,3,4,4,4,11,0,1,-9,0,0,-5,0,1,2,3,3,0,0,2,0,4,13,-3,4,4,12,0,0,3,-1,0,-5,0,1,0,0,0,0,0,0,1,0,4,5,-8,-3,-1,11,0,0,0,4,1,0,0,1,1,0,1,1,2,0,1,0,0,7,9,0,0,-2,0,0,-1,0,4,2,2,2,2,2,0,0,0,1,0,5,0,0,6,0,1,5,0,0,0,4,3,4,4,1,1,3,2,4,0,3,3,-2,2,-3,2,0,4,-2,-1,0,3,1,4,3,8,3,3,3,4,5,6,5,4,3,2,-7,2,0,0,1,0,3,7,8,9,5,6,3,6,7,7,9,9,52,58,-1,1,5,5,2,1,2,-5,7,10,4,9,10,10,6,9,11,8,10,16,11,12,0,-2,0,2,9,1,3,0,4,11,12,10,12,7,9,21,12,14,16,15,11,10,0,0,2,0,0,8,4,5,10,14,10,11,13,15,13,23,17,16,16,17,19,13,0,-1,6,1,3,0,6,5,18,19,22,11,16,18,43,21,20,21,19,21,19,19,-1,0,-2,2,1,3,3,4,21,23,38,15,21,18,23,22,22,22,27,24,21,23,1,0,0,7,2,8,5,9,47,36,24,21,103,20,25,27,29,28,29,25,23,28,0,0,0,1,7,4,7,12,45,81,22,26,29,24,39,32,40,43,32,33,38,47,0,0,0,1,6,5,6,12,45,81,22,26,29,24,40,33,40,44,32,33,41,53],
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
