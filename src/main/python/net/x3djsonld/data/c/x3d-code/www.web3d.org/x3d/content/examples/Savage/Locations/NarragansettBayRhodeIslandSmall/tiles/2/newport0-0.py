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
    GeoLOD(center=(41.47037194221004,-71.40258016458995,0.0),range=8600.306,child1Url=['../../tiles/3/newport0-0.x3d'],child2Url=['../../tiles/3/newport0-1.x3d'],child3Url=['../../tiles/3/newport1-0.x3d'],child4Url=['../../tiles/3/newport1-1.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/2/newport0-0.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.4380885111,-71.4348635957,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=0.0029348573,zDimension=23,zSpacing=0.0029348573,height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,0,0,0,0,0,0,0,0,0,0,0,8,0,0,0,0,0,0,0,0,0,0,12,8,0,0,0,0,0,0,0,0,0,0,17,12,0,0,0,0,0,0,0,0,0,13,14,10,0,0,0,0,0,0,0,0,0,22,21,12,0,0,0,0,0,0,0,0,20,20,1,0,0,0,0,0,0,0,0,0,22,20,18,0,0,0,0,0,0,0,0,23,20,0,0,0,0,0,0,0,0,0,0,13,20,12,0,0,0,0,0,0,0,0,26,15,0,0,0,0,0,0,0,0,0,0,0,0,3,0,10,0,0,0,0,0,0,34,15,0,0,0,0,0,0,0,0,0,0,0,2,11,13,17,16,0,0,0,0,0,37,12,0,0,0,8,0,0,0,0,0,0,0,10,20,19,16,7,0,0,0,0,0,32,6,0,0,2,19,0,0,0,0,0,0,0,13,25,26,18,0,0,1,4,0,0,17,2,0,0,0,14,0,0,0,0,0,0,0,23,30,29,15,0,0,4,16,2,2,17,1,0,0,0,2,0,0,0,0,0,0,0,21,30,31,12,0,0,16,29,29,29,19,6,4,13,5,0,0,0,0,0,0,0,0,9,21,21,6,0,0,18,25,26,26,18,8,9,17,10,0,0,0,0,0,0,0,0,2,9,10,0,0,7,24,28,24,24,21,6,15,24,15,0,0,0,0,0,0,0,2,0,1,5,0,0,6,19,29,21,21,26,22,25,35,17,0,0,0,0,0,0,0,0,0,0,0,0,0,3,10,20,17,17,32,30,25,32,13,0,0,0,0,0,0,0,0,0,0,0,0,11,17,11,14,10,10,37,37,30,26,10,0,0,1,0,0,2,0,0,0,0,0,0,14,23,19,18,17,17,41,37,36,35,23,0,0,0,0,0,0,23,9,0,0,0,0,0,17,14,16,19,19,42,38,37,37,24,0,0,0,0,0,0,22,13,0,0,0,0,0,17,14,15,19,19],
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
