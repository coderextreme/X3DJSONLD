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
    GeoLOD(center=(41.6560016710928,-71.34608416014737,0.0),range=2150.0764,child1Url=['../../tiles/5/newport26-10.x3d'],child2Url=['../../tiles/5/newport26-11.x3d'],child3Url=['../../tiles/5/newport27-10.x3d'],child4Url=['../../tiles/5/newport27-11.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport13-5.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.64793081331529,-71.35415501792488,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=24,xSpacing=7.018137E-4,zDimension=24,zSpacing=7.018137E-4,height=[0,0,0,1,12,15,15,18,19,18,15,14,14,9,7,9,3,0,0,0,0,0,0,0,0,0,0,1,12,13,15,17,15,17,15,14,12,9,8,7,7,4,0,0,0,0,0,0,0,0,0,0,7,11,14,15,15,13,12,8,12,13,9,6,8,13,9,3,0,0,0,0,0,0,0,0,2,6,7,9,11,11,7,9,7,11,13,15,19,13,9,9,6,2,1,1,0,0,0,0,2,2,5,8,8,4,2,7,10,14,16,15,13,12,10,9,7,4,2,4,0,0,0,2,2,2,2,4,2,2,2,8,12,10,12,11,10,11,11,9,9,7,3,2,0,0,0,2,2,2,2,2,2,2,2,5,7,9,12,12,9,11,9,9,9,7,4,2,0,0,0,1,2,2,2,1,0,0,0,6,5,8,8,6,7,5,7,7,6,6,5,5,0,0,0,0,0,0,0,0,0,0,0,0,3,1,0,2,6,4,2,5,7,8,8,7,0,0,0,0,0,0,0,0,0,0,1,2,1,0,0,0,2,2,2,4,2,4,7,7,0,0,0,0,0,0,0,0,0,0,2,2,0,0,0,1,2,2,1,1,2,2,3,2,0,0,0,0,0,0,0,0,0,2,1,1,2,0,0,2,3,3,0,0,0,2,4,4,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,2,2,2,0,1,2,0,5,7,0,0,0,0,0,0,0,0,0,0,0,4,1,0,0,0,2,2,2,2,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,4,7,7,3,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,2,2,2,6,4,7,6,3,2,0,0,0,0,0,0,0,0,0,0,0,0,3,4,5,5,7,7,7,7,9,7,6,5,0,0,0,0,0,0,0,0,0,1,2,4,6,6,6,8,6,8,10,10,9,7,8,2,0,0,0,0,0,0,5,6,5,8,8,6,8,7,8,9,8,9,12,13,7,9,8,7,5,0,0,0,0,0,6,8,10,12,11,11,9,9,12,9,8,11,13,15,9,8,8,7,0,0,0,0,0,8,9,10,11,12,13,12,13,16,16,14,11,12,13,11,7,1,0,1,0,0,0,0,0,3,4,10,12,13,14,15,13,13,15,15,15,13,8,4,0,0,0,1,0,0,0,0,0,2,2,8,11,11,13,14,13,14,15,16,15,11,7,2,0,0,0],
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
