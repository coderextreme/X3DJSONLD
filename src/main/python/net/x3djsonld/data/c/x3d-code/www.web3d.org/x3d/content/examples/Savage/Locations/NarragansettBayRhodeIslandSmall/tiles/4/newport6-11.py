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
    GeoLOD(center=(41.543009662207645,-71.24923386681724,0.0),range=2150.0764,child1Url=['../../tiles/5/newport12-22.x3d'],child2Url=['../../tiles/5/newport12-23.x3d'],child3Url=['../../tiles/5/newport13-22.x3d'],child4Url=['../../tiles/5/newport13-23.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport6-11.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.53493880443013,-71.25730472459475,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=24,xSpacing=7.018137E-4,zDimension=24,zSpacing=7.018137E-4,height=[63,61,64,65,67,64,65,65,61,62,62,57,53,55,54,51,49,46,43,40,37,36,34,34,62,62,64,64,64,64,62,64,61,61,63,59,55,55,55,52,50,47,43,40,38,36,34,33,62,63,63,66,67,67,63,61,61,59,59,61,60,57,55,54,51,47,44,41,38,36,34,33,62,61,62,62,63,68,68,62,62,64,63,61,62,60,60,55,52,49,45,41,39,36,33,33,62,63,65,62,63,65,68,71,68,62,63,64,62,60,56,55,52,48,44,41,38,35,33,32,65,64,61,62,64,65,67,66,68,65,67,63,63,61,56,53,50,48,43,39,37,34,32,31,64,63,62,64,63,65,67,66,66,66,64,64,62,59,55,52,49,45,42,39,37,34,33,32,65,66,62,65,66,65,66,69,70,65,61,61,58,55,53,51,49,45,42,39,37,35,34,34,67,65,68,67,68,66,64,65,65,62,59,57,55,52,51,49,47,44,41,38,36,33,31,30,66,66,65,68,68,64,64,65,57,59,56,51,51,51,50,48,46,44,41,38,36,32,27,26,68,68,67,67,67,67,62,59,58,55,52,52,50,47,47,46,45,42,40,36,31,27,26,26,69,69,68,66,65,64,59,55,54,54,54,53,49,47,45,45,42,39,36,34,33,32,34,34,71,67,68,67,64,64,62,57,54,53,51,50,49,48,47,45,44,43,41,40,39,38,39,39,71,70,67,64,64,65,65,57,53,50,53,53,49,50,49,47,46,45,44,43,42,41,41,40,70,68,69,67,69,65,64,58,57,56,56,52,50,51,50,49,48,47,45,43,42,42,42,41,73,68,71,74,71,64,62,62,58,58,57,54,54,52,51,50,49,47,45,44,43,43,42,42,75,76,72,68,69,65,62,62,60,58,56,56,55,51,51,50,49,47,46,45,44,43,42,42,76,73,74,72,69,69,63,62,61,57,56,56,56,53,52,50,49,48,47,46,46,44,43,42,76,74,72,70,70,66,64,63,61,59,58,57,57,54,51,51,49,48,47,46,46,44,43,42,75,74,72,71,67,67,66,62,62,62,58,59,54,54,53,51,49,48,47,46,45,44,42,41,76,75,74,69,68,67,68,64,61,60,59,57,56,55,53,51,50,48,47,45,44,42,39,38,76,75,73,69,69,69,66,64,62,60,59,57,55,54,53,52,50,48,46,44,42,41,42,42,78,77,74,72,72,71,69,67,64,59,58,51,55,56,54,52,51,49,47,45,43,42,44,44,79,76,74,72,71,73,71,67,65,59,57,49,54,56,54,52,51,49,47,45,43,42,44,45],
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
