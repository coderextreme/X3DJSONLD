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
    GeoLOD(center=(41.6560016710928,-71.24923386681724,0.0),range=2150.0764,child1Url=['../../tiles/5/newport26-22.x3d'],child2Url=['../../tiles/5/newport26-23.x3d'],child3Url=['../../tiles/5/newport27-22.x3d'],child4Url=['../../tiles/5/newport27-23.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport13-11.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.64793081331529,-71.25730472459475,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=24,xSpacing=7.018137E-4,zDimension=24,zSpacing=7.018137E-4,height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,18,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,22,11,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,27,22,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,30,23,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,28,20,4,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,26,18,11,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,21,17,17,4,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,19,15,13,5,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,19,14,9,10,3,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,15,14,6,8,8,3,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,16,12,8,8,7,3,1,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,15,15,10,7,5,4,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,13,12,12,8,4,4,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,13,10,11,10,8,4,0,1,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,13,12,12,8,9,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,13,9,12,10,7,2,2,1,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,12,12,11,8,6,5,2,1,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,12,13,12,6,5,7,4,1,0,1,0,0,0,0,1,1,1,1,1,1,1,1,1,1,16,11,12,10,10,4,3,0,0,1,0,0,0,0,1,1,1,1,1,1,1,1,1,1,15,10,13,11,9,10,7,1,0,1,1,0,0,0,1,1,1,1,1,1,1,1,1,1,16,10,14,12,9,10,7,1,0,1,1,0,0,0,1,1,1,1,1,1,1,1,1,1],
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
