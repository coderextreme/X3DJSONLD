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
    GeoLOD(center=(41.46230108443253,-71.39450930681244,0.0),range=2150.0764,child1Url=['../../tiles/5/newport2-4.x3d'],child2Url=['../../tiles/5/newport2-5.x3d'],child3Url=['../../tiles/5/newport3-4.x3d'],child4Url=['../../tiles/5/newport3-5.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport1-2.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.45423022665502,-71.40258016458995,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=24,xSpacing=7.018137E-4,zDimension=24,zSpacing=7.018137E-4,height=[0,0,0,1,9,12,16,17,17,16,15,12,8,4,0,0,0,0,0,0,0,0,0,0,0,0,0,3,11,14,17,19,20,19,17,15,13,10,7,4,0,0,0,0,0,0,0,0,0,0,0,4,12,16,18,20,21,20,19,16,15,14,12,9,5,0,0,0,0,0,0,0,0,0,0,3,10,14,18,20,20,20,19,17,16,15,13,10,8,2,0,0,0,0,0,0,0,0,0,3,9,14,18,22,23,21,22,21,20,17,15,12,9,5,0,0,0,0,0,0,0,0,0,3,11,15,19,22,23,21,21,21,21,19,16,14,10,5,0,0,0,0,0,0,0,0,0,3,10,14,18,20,21,19,19,20,19,18,17,15,12,8,0,0,0,0,0,0,0,0,0,4,12,15,20,21,19,19,19,20,18,21,20,17,15,11,0,0,0,0,0,0,0,0,0,6,14,16,21,21,21,21,20,20,20,23,21,19,16,13,1,0,0,0,0,0,0,0,0,1,13,17,20,22,22,21,21,21,21,21,21,19,16,13,1,0,0,0,0,0,0,0,0,2,12,18,21,23,25,23,23,23,23,22,20,19,16,13,1,0,0,0,0,0,0,0,0,0,8,16,20,21,23,23,24,24,21,21,20,17,14,12,0,0,0,0,0,0,0,0,0,0,1,10,14,17,19,21,21,22,21,20,18,15,12,9,0,0,0,0,0,0,0,0,0,0,0,2,10,13,15,17,18,19,18,16,14,12,9,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,12,14,15,13,12,11,8,6,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,11,9,9,8,7,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,8,7,7,6,4,1,0,0,0,0,2,3,0,0,0,0,0,0,0,0,0,0,0,0,4,3,3,3,4,4,1,0,0,1,7,8,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,2,2,5,6,4,4,5,8,8,0,0,0,0,0,0,0,0,0,0,0,0,2,5,5,5,5,7,7,7,7,8,10,11,0,0,0,0,0,0,0,0,0,0,0,0,4,7,8,8,8,9,10,10,10,12,12,13,0,0,0,0,0,0,0,0,0,0,0,1,5,8,9,11,11,12,13,13,13,14,14,15,0,0,0,0,0,0,0,0,0,0,0,6,7,10,10,12,14,15,14,14,14,16,17,17,0,0,0,0,0,0,0,0,0,0,0,6,7,11,11,12,14,15,15,15,15,16,18,18],
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
