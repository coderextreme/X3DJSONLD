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
    GeoLOD(center=(41.47634988941996,-71.72526478466978,0.0),range=6150.5674,child1Url=['../../tiles/5/newport14-2.x3d'],child2Url=['../../tiles/5/newport14-3.x3d'],child3Url=['../../tiles/5/newport15-2.x3d'],child4Url=['../../tiles/5/newport15-3.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport7-1.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.45215981325196,-71.74725013871318,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[74,76,75,69,60,50,36,30,24,21,21,22,24,15,22,21,25,20,19,21,24,25,74,73,69,62,51,41,35,28,23,21,28,25,26,24,15,21,26,23,19,22,26,25,64,65,59,56,48,38,40,33,26,20,22,31,33,21,15,23,29,26,23,21,19,18,65,64,55,51,47,49,46,39,32,29,26,34,29,28,18,22,25,32,30,26,26,25,67,57,54,49,48,49,43,34,33,42,42,36,31,29,25,16,24,25,27,27,26,26,61,51,50,49,44,54,53,42,49,54,49,38,35,31,24,15,14,23,28,29,25,26,59,55,54,61,67,72,65,56,58,56,49,41,34,25,20,19,16,18,27,26,25,25,65,60,67,77,79,77,62,56,56,53,46,42,29,23,18,18,16,22,26,27,26,26,71,74,90,91,86,78,69,60,56,52,42,22,20,20,19,18,21,24,23,27,27,27,79,91,99,97,90,75,67,61,56,50,26,22,19,15,20,25,21,27,27,26,26,26,79,93,101,93,84,76,68,58,52,36,31,21,19,16,25,27,30,21,25,24,28,29,77,93,99,86,75,69,60,53,37,23,23,24,24,19,17,28,35,35,29,20,32,30,83,92,91,80,68,56,39,31,22,26,26,28,25,20,22,27,30,31,27,29,26,27,83,93,88,72,60,42,24,26,19,26,28,30,25,21,20,22,22,24,30,29,27,26,73,84,73,54,40,25,24,27,23,24,29,30,28,23,21,21,29,28,28,29,19,20,47,53,43,31,25,21,22,19,20,21,28,25,26,24,22,21,20,24,26,29,20,20,30,28,26,26,28,25,25,22,21,20,28,32,28,27,23,19,21,25,24,21,20,20,27,21,24,29,33,30,29,22,25,29,35,34,28,24,26,16,18,16,25,19,21,21,26,28,32,37,37,33,35,40,36,40,44,34,33,26,15,18,17,23,28,32,40,34,31,26,36,38,40,41,44,43,51,55,48,34,30,21,18,21,23,38,39,42,40,39,27,31,30,47,55,54,49,58,63,56,46,37,30,23,17,24,32,37,39,36,27,27,27,32,31,47,56,54,50,60,64,56,46,36,32,21,18,23,31,36,39,35,27,27],
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
