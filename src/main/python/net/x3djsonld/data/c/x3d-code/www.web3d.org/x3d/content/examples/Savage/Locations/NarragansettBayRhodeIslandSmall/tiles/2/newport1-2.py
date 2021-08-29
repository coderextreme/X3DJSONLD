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
    GeoLOD(center=(41.53493880443013,-71.27344644014977,0.0),range=8600.306,child1Url=['../../tiles/3/newport2-4.x3d'],child2Url=['../../tiles/3/newport2-5.x3d'],child3Url=['../../tiles/3/newport3-4.x3d'],child4Url=['../../tiles/3/newport3-5.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/2/newport1-2.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.50265537332009,-71.30572987125981,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=0.0029348573,zDimension=23,zSpacing=0.0029348573,height=[27,30,29,34,22,3,10,29,42,49,43,33,24,27,43,38,18,17,23,29,32,12,11,28,39,42,41,27,4,17,42,54,54,48,40,32,36,47,54,34,23,27,27,14,2,1,28,40,49,35,11,7,20,42,57,58,51,40,33,41,50,53,46,36,33,22,6,10,11,40,44,43,20,7,17,20,41,54,56,59,43,38,40,52,59,56,49,38,24,11,28,28,35,40,38,18,13,24,34,43,57,69,59,46,40,42,57,58,62,60,45,26,18,30,30,23,31,30,18,23,29,45,50,52,64,62,54,45,48,62,61,59,61,48,31,17,21,22,25,35,29,21,25,37,45,50,54,58,61,59,48,53,64,64,58,54,46,32,20,22,22,31,33,25,23,25,41,53,51,51,63,54,60,53,55,67,68,61,51,40,34,23,21,20,30,34,31,30,34,40,48,45,50,53,60,54,50,51,63,79,59,51,44,38,28,19,18,26,30,28,34,39,39,42,45,50,52,55,60,55,56,64,66,63,57,51,43,35,25,25,27,23,42,44,48,40,39,48,55,55,62,68,71,71,65,63,64,64,55,50,38,29,29,14,24,40,50,52,44,44,53,55,52,57,71,82,81,73,64,62,68,63,51,37,24,24,20,27,45,52,49,50,49,52,55,57,53,67,78,87,81,70,68,62,49,47,36,25,25,16,32,56,49,46,52,52,55,54,56,53,65,74,84,85,74,64,56,51,47,42,36,35,23,28,50,48,46,52,54,52,59,56,62,64,77,82,93,78,71,63,59,50,46,37,34,30,29,37,46,47,50,50,55,63,55,56,64,77,82,86,81,72,66,53,51,43,45,45,14,12,33,41,39,43,49,55,59,48,49,53,53,68,79,75,79,70,60,50,46,45,44,0,24,34,45,25,36,46,62,57,48,50,53,53,57,70,71,80,71,61,54,47,29,28,0,19,35,28,18,40,52,55,55,58,61,53,53,68,73,76,86,73,61,48,27,26,26,0,0,21,23,16,36,46,50,33,51,57,62,67,74,76,83,90,74,63,49,43,35,34,0,0,4,14,16,31,41,53,32,32,41,55,65,72,80,95,88,78,68,54,46,43,42,0,0,0,4,10,25,45,41,26,32,32,41,48,63,85,82,80,78,64,54,49,47,46,0,0,0,4,8,27,44,40,28,32,32,42,48,62,84,82,79,75,64,54,49,47,47],
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
