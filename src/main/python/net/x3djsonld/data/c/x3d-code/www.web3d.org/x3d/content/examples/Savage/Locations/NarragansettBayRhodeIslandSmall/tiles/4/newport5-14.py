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
    GeoLOD(center=(41.52686794665262,-71.20080872015217,0.0),range=2150.0764,child1Url=['../../tiles/5/newport10-28.x3d'],child2Url=['../../tiles/5/newport10-29.x3d'],child3Url=['../../tiles/5/newport11-28.x3d'],child4Url=['../../tiles/5/newport11-29.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport5-14.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.51879708887511,-71.20887957792968,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=24,xSpacing=7.018137E-4,zDimension=24,zSpacing=7.018137E-4,height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,2,8,15,21,25,29,31,31,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,1,2,9,16,22,26,30,31,31,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,4,10,18,23,26,29,30,31,0,0,0,0,0,0,0,0,0,2,1,1,1,1,1,1,6,12,19,23,26,28,29,30,0,0,0,0,0,0,0,0,0,1,1,1,1,1,0,2,8,14,20,24,25,26,28,28,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,5,10,15,20,23,25,26,27,27,0,0,0,0,0,0,0,0,0,0,1,1,1,1,2,6,11,15,19,23,25,25,27,27,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,5,11,16,20,23,24,25,26,27,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,5,9,15,20,22,23,25,26,27,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,5,9,13,16,20,23,25,26,27,0,0,0,0,0,0,0,0,0,1,1,1,2,2,3,5,8,11,14,18,22,25,27,28,0,0,0,0,0,0,0,0,1,1,1,3,4,4,4,6,7,10,13,16,20,24,26,27,0,0,0,0,0,0,0,2,4,4,5,7,7,7,7,7,8,9,12,16,20,23,26,27,0,0,0,0,0,0,2,5,7,8,10,11,11,11,10,9,9,10,12,16,20,24,26,27,0,0,0,0,0,2,6,9,11,12,14,16,15,15,14,11,12,11,15,20,21,24,27,28,0,0,0,0,0,5,9,12,14,17,18,20,20,19,18,14,14,14,18,21,23,25,28,30,0,0,0,0,1,6,12,15,18,22,22,23,23,23,21,16,16,17,19,21,23,26,29,30,0,0,0,0,2,7,12,18,22,24,25,25,25,24,23,20,18,18,19,20,22,27,30,30,0,0,0,0,0,6,12,18,22,25,26,26,26,25,24,21,19,18,19,20,22,27,28,28,0,0,0,0,0,5,12,17,22,25,27,27,27,25,24,22,21,20,19,20,22,24,25,25,0,0,0,0,0,4,10,16,22,25,28,28,28,26,25,23,21,20,19,20,22,23,23,23,0,0,0,0,0,3,9,15,21,25,28,29,29,28,26,24,23,21,20,21,22,21,21,21,0,0,0,0,0,2,8,14,19,24,28,30,31,30,27,25,23,22,21,22,21,21,20,20,0,0,0,0,0,1,8,14,19,24,28,30,31,30,28,25,23,22,22,22,21,21,20,20],
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
