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
    GeoLOD(center=(41.71825065109993,-71.50541124423569,0.0),range=6150.5674,child1Url=['../../tiles/5/newport24-12.x3d'],child2Url=['../../tiles/5/newport24-13.x3d'],child3Url=['../../tiles/5/newport25-12.x3d'],child4Url=['../../tiles/5/newport25-13.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport12-6.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.69406057493193,-71.5273965982791,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[48,55,61,81,86,94,92,79,79,78,76,74,82,97,104,109,109,95,84,86,71,65,47,48,62,76,86,89,84,82,82,82,75,71,79,93,102,108,97,88,82,79,59,54,44,47,57,66,75,77,74,73,75,72,67,66,74,91,93,90,83,74,74,59,50,47,44,45,51,60,75,77,74,70,63,63,61,63,69,76,74,68,70,74,70,57,42,40,47,40,47,51,69,74,77,68,62,60,57,58,67,70,67,70,69,75,63,56,42,41,56,40,46,51,67,60,59,57,57,54,52,55,64,66,65,68,72,72,67,53,40,38,60,44,39,44,66,64,55,46,48,52,42,52,52,53,52,56,60,50,46,41,33,32,55,43,39,42,51,52,45,43,41,47,43,36,43,41,44,43,43,45,37,30,27,27,45,40,39,38,45,45,45,42,40,41,37,42,40,40,42,38,34,34,28,30,38,36,49,42,39,48,35,40,42,42,48,53,52,53,43,48,41,44,41,44,43,45,46,46,50,48,49,45,32,41,46,50,58,63,61,54,50,46,48,46,53,57,54,54,51,51,52,53,53,48,41,50,56,61,68,71,65,59,64,53,54,52,61,60,70,64,57,54,63,53,50,39,43,54,65,76,74,72,72,73,60,61,60,64,62,64,72,74,66,60,72,60,47,39,26,52,69,78,78,72,63,53,51,43,50,52,49,49,52,58,43,40,63,51,38,35,29,44,62,72,70,62,52,49,37,27,24,24,32,35,39,36,38,39,55,43,36,30,33,25,47,52,45,39,25,25,31,27,30,27,20,28,31,39,42,42,42,39,27,20,19,27,26,20,21,19,17,20,23,22,32,34,28,18,29,36,42,44,29,21,20,20,19,21,28,22,18,22,30,32,34,18,23,29,23,12,17,26,32,34,30,23,25,29,35,19,18,25,44,53,47,45,48,53,41,38,33,26,9,17,22,23,38,30,37,37,50,49,50,54,68,74,70,71,70,64,61,55,43,17,13,15,17,17,41,40,57,62,61,59,65,69,77,79,79,78,70,64,64,57,26,15,9,4,6,6,43,40,60,64,61,61,67,70,77,79,79,78,69,63,63,55,25,15,9,4,6,7],
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
