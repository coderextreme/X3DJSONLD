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
    GeoLOD(center=(41.46230108443253,-71.32994244459235,0.0),range=2150.0764,child1Url=['../../tiles/5/newport2-12.x3d'],child2Url=['../../tiles/5/newport2-13.x3d'],child3Url=['../../tiles/5/newport3-12.x3d'],child4Url=['../../tiles/5/newport3-13.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport1-6.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.45423022665502,-71.33801330236986,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=24,xSpacing=7.018137E-4,zDimension=24,zSpacing=7.018137E-4,height=[2,3,3,0,0,0,0,0,3,5,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,1,0,0,0,0,0,0,0,4,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,0,0,0,7,5,4,4,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,3,0,0,0,0,8,7,6,6,5,1,0,0,0,0,0,0,0,0,0,6,7,7,8,5,2,1,0,0,2,6,7,9,7,3,3,0,0,0,0,0,0,0,0,11,15,11,12,8,5,2,0,0,2,3,3,4,3,1,0,0,0,0,0,0,0,0,0,14,20,15,13,10,9,3,0,0,0,3,3,2,0,0,0,0,0,0,0,0,0,0,0,13,18,20,14,10,11,5,1,0,0,4,7,3,0,0,0,0,0,0,0,0,0,0,0,13,16,17,14,13,14,9,6,0,1,4,6,1,0,0,0,0,0,0,0,0,0,0,0,15,15,16,16,15,14,10,9,5,0,0,0,0,0,0,0,0,0,0,4,5,3,0,0,20,17,19,19,17,13,10,8,9,6,0,0,0,0,0,0,0,0,2,7,8,4,0,0,20,20,22,24,23,23,14,7,6,8,6,2,0,0,0,0,0,0,3,9,14,10,1,0,19,18,23,27,27,25,18,12,9,11,8,7,2,1,0,0,0,1,2,7,15,13,10,8,17,15,19,28,25,22,20,22,20,17,9,9,6,5,1,4,2,5,0,4,11,14,17,17,15,15,17,22,23,20,21,22,23,25,21,12,13,8,9,8,5,4,3,3,8,10,16,16,15,16,16,17,20,21,22,23,24,28,27,20,16,11,16,10,3,2,2,3,6,11,15,15,16,17,16,16,16,20,20,23,24,27,29,26,16,13,19,9,0,0,4,6,6,12,15,15,13,16,18,18,14,14,15,19,24,26,27,30,19,18,15,3,3,3,7,11,12,13,15,17,9,13,17,18,14,13,12,16,23,27,28,31,22,20,16,4,5,11,13,18,17,14,15,15,5,10,15,17,16,13,12,14,22,27,29,29,24,20,14,8,10,17,18,20,18,16,16,15,2,6,14,16,14,11,11,14,21,24,24,23,22,18,12,10,12,18,20,21,18,18,17,17,5,4,7,8,8,9,14,16,15,18,18,17,16,14,10,10,13,15,17,18,18,18,20,20,7,4,1,2,3,9,16,16,14,17,17,16,14,12,10,10,13,14,16,18,18,18,20,21],
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
