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
    GeoLOD(center=(41.478442799987555,-71.32994244459235,0.0),range=2150.0764,child1Url=['../../tiles/5/newport4-12.x3d'],child2Url=['../../tiles/5/newport4-13.x3d'],child3Url=['../../tiles/5/newport5-12.x3d'],child4Url=['../../tiles/5/newport5-13.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport2-6.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.47037194221004,-71.33801330236986,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=24,xSpacing=7.018137E-4,zDimension=24,zSpacing=7.018137E-4,height=[7,4,1,2,3,9,16,16,14,17,17,16,14,12,10,10,13,14,16,18,18,18,20,21,10,6,0,0,0,0,16,11,8,12,14,12,10,10,10,11,14,13,13,16,17,18,18,18,8,12,2,0,0,0,9,0,2,7,10,10,10,11,12,14,15,15,13,13,16,17,17,16,4,6,3,0,0,0,0,0,0,0,3,7,9,11,14,16,15,16,16,12,13,16,17,17,4,2,0,0,0,0,0,0,0,0,0,3,4,10,14,15,14,14,13,11,13,17,21,21,5,0,0,0,0,0,0,0,0,0,0,0,0,8,10,10,10,12,8,8,12,17,21,22,5,2,0,0,0,0,0,0,0,0,0,0,0,0,1,2,3,10,5,5,8,14,17,18,5,3,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,2,5,9,11,12,8,6,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,4,6,6,10,8,6,4,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,13,9,8,8,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,12,8,9,11,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,5,5,6,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,4,3,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,4,4,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,4,0,0,0,0,0,0,0,0],
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
