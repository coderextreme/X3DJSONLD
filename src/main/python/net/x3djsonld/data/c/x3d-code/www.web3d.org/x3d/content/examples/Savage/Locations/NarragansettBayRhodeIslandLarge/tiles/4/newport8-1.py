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
    GeoLOD(center=(41.52473004175595,-71.72526478466978,0.0),range=6150.5674,child1Url=['../../tiles/5/newport16-2.x3d'],child2Url=['../../tiles/5/newport16-3.x3d'],child3Url=['../../tiles/5/newport17-2.x3d'],child4Url=['../../tiles/5/newport17-3.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport8-1.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.500539965587954,-71.74725013871318,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[27,32,31,47,56,54,50,60,64,56,46,36,32,21,18,23,31,36,39,35,27,27,34,40,46,53,65,61,62,70,66,59,44,33,26,20,18,20,25,41,38,38,31,27,38,52,59,70,75,74,73,81,75,66,53,43,29,30,24,20,26,45,43,38,23,21,44,58,75,85,84,83,92,93,86,71,57,50,41,27,22,22,27,37,46,35,29,29,48,62,82,93,98,95,100,98,93,77,61,51,41,32,23,25,22,33,36,36,32,32,55,71,91,100,112,103,104,102,95,74,64,54,51,43,20,23,25,32,36,26,38,38,57,73,95,109,114,108,107,102,94,81,68,63,57,50,27,26,28,33,32,40,34,32,74,77,101,109,111,117,111,99,90,84,73,65,57,44,32,23,23,31,47,47,38,36,65,87,100,110,122,119,108,98,81,72,67,58,50,33,33,32,26,30,45,47,48,47,73,84,94,105,122,115,109,92,79,67,58,47,40,34,28,37,31,31,26,44,48,51,70,85,94,107,111,111,104,97,78,64,58,43,37,34,28,31,40,34,29,23,34,33,85,83,98,108,113,112,93,80,74,58,42,39,35,32,38,37,44,35,31,31,30,31,84,80,84,95,102,99,81,71,56,44,34,28,28,39,47,57,42,38,32,33,42,42,74,69,68,76,77,81,75,61,41,34,31,28,40,45,46,50,47,37,33,40,42,43,68,59,57,63,72,75,56,47,35,28,30,40,40,54,57,54,43,34,34,39,38,37,64,58,61,59,67,49,54,43,46,38,42,45,58,63,67,54,41,37,48,47,41,41,73,71,68,66,46,42,38,33,35,46,43,52,68,69,63,52,44,38,44,45,44,44,78,74,57,48,44,39,41,43,39,53,46,56,67,71,61,53,49,46,45,45,41,40,69,55,46,49,52,62,54,57,61,59,59,69,78,70,68,60,51,51,50,43,41,42,54,48,55,56,62,65,72,70,71,70,77,88,90,81,70,58,56,50,49,50,51,52,54,57,62,62,63,79,87,90,75,81,92,101,92,77,67,60,57,51,42,55,55,57,54,57,63,62,64,81,89,92,76,81,95,102,94,77,66,60,57,49,42,55,55,56],
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
