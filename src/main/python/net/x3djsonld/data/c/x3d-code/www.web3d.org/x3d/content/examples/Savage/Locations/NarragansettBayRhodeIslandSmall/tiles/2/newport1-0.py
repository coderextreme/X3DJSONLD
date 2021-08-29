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
    GeoLOD(center=(41.53493880443013,-71.40258016458995,0.0),range=8600.306,child1Url=['../../tiles/3/newport2-0.x3d'],child2Url=['../../tiles/3/newport2-1.x3d'],child3Url=['../../tiles/3/newport3-0.x3d'],child4Url=['../../tiles/3/newport3-1.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/2/newport1-0.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.50265537332009,-71.4348635957,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=0.0029348573,zDimension=23,zSpacing=0.0029348573,height=[42,38,37,37,24,0,0,0,0,0,0,22,13,0,0,0,0,0,17,14,15,19,19,54,48,45,42,31,14,0,0,0,0,0,12,19,0,0,0,0,0,0,2,5,11,12,49,46,40,38,34,15,0,0,0,0,0,0,0,0,0,0,0,1,9,13,4,2,2,44,45,46,37,35,22,4,0,0,0,0,0,0,0,0,0,4,10,11,13,9,2,2,37,44,45,48,46,30,11,0,0,0,0,0,0,0,0,16,19,16,15,24,24,9,8,41,44,50,56,56,37,16,0,0,0,0,0,0,0,9,21,36,32,20,17,24,18,17,45,51,55,62,60,38,22,0,0,0,0,0,0,0,14,24,39,44,28,17,14,23,21,46,48,59,67,56,38,10,0,0,0,0,0,0,0,11,22,29,37,30,15,16,27,26,39,45,51,54,49,32,0,0,0,0,0,0,0,0,0,20,25,33,36,20,9,18,20,29,45,53,53,39,18,2,0,0,0,0,0,0,0,0,15,29,33,39,26,15,16,17,30,43,43,41,23,4,0,0,0,0,0,0,0,0,0,8,27,35,43,39,24,18,20,27,38,35,22,7,0,0,0,0,0,0,0,0,0,0,0,10,18,37,45,34,29,28,19,24,22,7,0,0,0,0,0,0,0,0,0,0,0,0,0,13,30,43,40,28,27,12,13,5,0,0,0,0,0,0,0,0,0,0,0,0,0,5,14,29,41,38,28,27,9,0,1,11,0,0,0,0,0,0,0,0,0,0,0,0,11,22,24,35,31,26,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,18,19,23,24,23,22,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,11,17,18,20,25,26,6,10,9,0,0,0,0,0,0,0,0,0,0,0,0,0,1,12,12,15,22,26,26,1,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,12,18,18,27,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,22,23,26,30,29,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,15,22,29,26,26,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,22,26,26,26,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,22,27,24,24],
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
