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
    GeoLOD(center=(41.6560016710928,-71.2976590134823,0.0),range=2150.0764,child1Url=['../../tiles/5/newport26-16.x3d'],child2Url=['../../tiles/5/newport26-17.x3d'],child3Url=['../../tiles/5/newport27-16.x3d'],child4Url=['../../tiles/5/newport27-17.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport13-8.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.64793081331529,-71.30572987125981,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=7.337143E-4,zDimension=24,zSpacing=7.018137E-4,height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,8,9,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,9,9,9,9,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,11,13,12,12,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,10,15,13,13,11,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,11,15,15,13,10,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,11,12,15,15,15,11,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,5,14,19,20,23,18,13,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,13,15,17,18,19,17,16,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,12,18,14,18,21,18,19,13,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,15,14,20,23,21,19,19,13,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,12,15,16,21,23,24,20,14,0,0,0,0,0,0,0,0,0,0,0,0,0,1,8,15,14,16,17,23,25,21,15,1,0,0,0,0,0,0,0,0,0,0,0,0,1,9,10,14,18,25,24,22,19,16,11,0,0,0,0,0,0,0,0,0,0,0,0,1,9,8,14,18,22,23,23,20,15,11,1,0,0,0,0,0,0,0,0,0,0,0,1,8,9,15,20,22,23,23,19,14,11,1,0,0,0,0,0,0,0,0,0],
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
