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
    GeoLOD(center=(41.64793081331529,-71.35415501792488,0.0),range=4300.153,child1Url=['../../tiles/4/newport12-4.x3d'],child2Url=['../../tiles/4/newport12-5.x3d'],child3Url=['../../tiles/4/newport13-4.x3d'],child4Url=['../../tiles/4/newport13-5.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/newport6-2.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.63178909776027,-71.3702967334799,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=24,xSpacing=0.0014036275,zDimension=24,zSpacing=0.0014036275,height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,13,8,4,4,10,7,5,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,11,10,12,13,9,12,9,6,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,15,16,15,10,8,7,8,5,4,0,0,0,0,0,0,0,0,0,0,0,0,0,4,15,20,20,16,10,5,7,6,3,2,0,0,0,0,0,0,0,0,0,0,0,0,0,8,15,20,26,22,15,7,1,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,9,16,20,24,20,11,4,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,11,16,19,24,18,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,13,19,22,16,9,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,13,18,17,13,13,9,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,12,14,9,10,9,13,9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,6,3,3,13,14,13,11,9,1,2,0,0,0,0,0,0,0,0,0,0,0,0,1,2,2,1,3,7,13,7,7,6,3,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,0,3,1,7,7,6,0,0,0,0,0,0,9,10,2,0,0,0,0,0,0,0,0,1,1,2,0,2,3,1,0,0,0,0,0,0,14,14,8,5,0,0,0,0,0,0,1,0,0,2,1,0,7,2,0,0,0,0,0,8,20,16,9,5,0,0,0,0,0,0,0,0,0,0,2,3,0,0,0,0,0,0,0,16,17,13,9,6,3,0,0,0,0,0,0,1,2,5,6,7,2,0,0,0,0,0,0,13,15,18,14,11,5,1,0,0,0,3,4,7,6,8,13,8,8,9,0,0,0,1,13,14,15,18,13,13,9,5,0,0,4,10,13,13,16,10,10,12,3,0,0,0,0,3,13,13,14,17,14,12,9,5,0,0,8,9,12,13,17,11,11,11,0,0],
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
