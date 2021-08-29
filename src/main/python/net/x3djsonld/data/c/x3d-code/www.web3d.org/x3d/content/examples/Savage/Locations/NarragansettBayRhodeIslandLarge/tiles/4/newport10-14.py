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
    GeoLOD(center=(41.62149034642794,-71.15364557954115,0.0),range=6150.5674,child1Url=['../../tiles/5/newport20-28.x3d'],child2Url=['../../tiles/5/newport20-29.x3d'],child3Url=['../../tiles/5/newport21-28.x3d'],child4Url=['../../tiles/5/newport21-29.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport10-14.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.59730027025994,-71.17563093358456,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[42,32,31,42,40,45,53,49,43,34,27,25,25,25,27,25,25,26,33,32,26,27,34,32,37,47,43,46,52,46,38,31,25,25,25,25,25,25,27,35,39,30,32,33,34,39,35,46,51,49,51,45,38,29,25,25,25,25,25,25,34,41,39,33,34,36,34,34,36,41,44,50,49,45,34,27,25,26,25,25,25,27,37,42,40,34,38,40,34,34,34,35,40,44,42,39,29,28,27,25,25,25,25,30,41,45,40,36,40,41,36,34,34,34,36,42,38,34,29,29,27,26,25,25,25,31,39,44,41,38,40,41,46,37,36,34,35,41,39,35,32,31,30,28,28,28,28,32,42,40,39,38,39,41,42,41,36,34,38,44,41,36,32,36,35,32,33,31,32,37,42,41,42,40,40,41,46,40,36,34,42,46,42,37,35,43,41,41,41,33,35,41,44,43,42,42,41,41,43,37,37,35,50,50,42,39,45,49,46,46,44,38,41,47,44,43,41,41,41,41,40,37,37,38,56,54,48,45,50,57,55,56,47,45,48,50,45,43,41,41,41,41,42,39,37,39,61,58,49,51,56,62,65,61,51,52,56,48,45,42,41,41,41,41,45,38,38,41,64,60,51,55,61,66,74,67,58,58,58,51,46,41,41,41,41,41,47,47,39,44,63,59,53,58,61,69,78,70,69,68,59,53,50,42,41,41,41,41,47,42,42,49,60,60,55,57,60,70,75,73,80,75,61,57,53,44,41,41,41,41,49,43,43,50,58,60,59,58,61,71,73,80,88,77,67,64,57,47,41,41,41,41,47,44,47,56,59,64,63,60,63,70,74,86,82,75,71,69,59,46,41,41,41,41,45,46,49,60,64,71,65,62,67,72,76,86,75,71,71,71,61,49,44,41,42,42,44,49,54,63,67,76,69,67,71,73,76,75,67,70,75,72,60,50,44,42,42,42,42,48,57,62,69,79,76,71,70,74,73,62,62,63,69,70,62,51,44,43,42,42,47,52,64,65,70,79,81,75,70,73,61,61,61,61,63,65,56,50,43,40,40,40,47,52,64,65,70,79,81,75,70,72,61,61,61,61,63,65,56,49,43,40,40,40],
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
