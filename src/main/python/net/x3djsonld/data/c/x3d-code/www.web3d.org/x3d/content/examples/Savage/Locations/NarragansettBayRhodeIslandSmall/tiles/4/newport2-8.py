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
    GeoLOD(center=(41.478442799987555,-71.2976590134823,0.0),range=2150.0764,child1Url=['../../tiles/5/newport4-16.x3d'],child2Url=['../../tiles/5/newport4-17.x3d'],child3Url=['../../tiles/5/newport5-16.x3d'],child4Url=['../../tiles/5/newport5-17.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport2-8.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.47037194221004,-71.30572987125981,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=7.337143E-4,zDimension=24,zSpacing=7.018137E-4,height=[12,14,15,14,12,11,9,8,11,11,12,11,10,7,0,0,0,0,0,0,0,0,0,14,15,16,16,12,10,9,10,13,13,14,13,12,5,0,0,0,0,0,0,0,0,0,16,17,18,17,13,11,10,12,13,14,14,14,12,0,0,0,0,0,0,0,0,0,0,16,18,18,17,15,12,11,12,14,15,16,15,10,0,0,0,0,0,0,0,0,0,0,17,18,18,15,13,12,12,13,16,17,17,18,4,0,0,0,0,0,0,0,0,0,0,15,18,17,14,12,12,12,13,16,17,17,17,3,0,0,0,0,0,0,0,0,0,0,15,17,16,14,12,11,12,13,15,15,15,16,2,0,0,0,0,0,0,0,0,0,0,17,19,18,14,13,12,12,14,16,14,14,15,0,0,0,0,0,0,0,0,0,0,0,18,18,17,14,13,12,13,15,16,15,15,16,9,0,0,0,0,0,0,0,0,0,0,17,17,16,15,14,14,15,16,17,17,16,16,14,0,0,0,0,0,0,0,0,0,0,20,20,20,19,16,15,16,18,18,18,17,16,15,0,0,0,0,0,0,0,0,0,0,19,21,22,20,17,16,17,19,20,20,19,18,16,1,0,0,0,0,0,0,0,0,0,19,21,22,21,17,17,18,21,21,21,19,18,16,7,0,0,0,0,0,0,0,0,0,20,22,21,20,18,18,19,21,21,20,18,16,15,12,0,0,0,0,0,0,0,0,0,20,21,21,20,18,18,18,20,21,22,20,18,15,12,0,0,0,0,0,0,0,0,0,20,21,21,19,18,18,20,20,21,22,21,18,16,12,0,0,0,0,0,0,0,0,0,21,20,19,18,18,19,21,22,22,22,20,18,15,10,0,0,0,0,0,0,0,0,0,20,19,18,18,18,19,21,24,25,24,21,18,16,10,0,0,0,0,0,0,0,0,0,20,18,18,17,18,19,22,24,25,24,21,18,15,8,0,0,0,0,0,0,0,0,0,21,18,17,16,16,20,21,22,22,22,21,17,14,6,0,0,0,0,0,0,0,0,0,20,18,17,17,19,20,21,22,22,22,20,17,13,1,0,0,0,0,0,0,0,0,0,20,18,18,18,20,21,22,23,22,21,19,15,11,0,0,0,0,0,0,0,0,0,0,22,21,20,20,20,22,23,24,23,20,17,12,9,0,0,0,0,0,0,0,0,0,0,23,21,21,20,21,22,23,24,23,20,17,12,8,1,0,0,0,0,0,0,0,0,0],
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
