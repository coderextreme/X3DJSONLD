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
    GeoLOD(center=(41.669870498763935,-71.15364557954115,0.0),range=6150.5674,child1Url=['../../tiles/5/newport22-28.x3d'],child2Url=['../../tiles/5/newport22-29.x3d'],child3Url=['../../tiles/5/newport23-28.x3d'],child4Url=['../../tiles/5/newport23-29.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport11-14.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.64568042259594,-71.17563093358456,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[47,52,64,65,70,79,81,75,70,72,61,61,61,61,63,65,56,49,43,40,40,40,50,51,70,70,71,77,81,74,71,62,61,61,61,61,62,60,62,52,47,45,41,40,50,53,65,75,76,81,79,67,69,61,61,61,61,61,65,62,60,53,49,46,42,41,57,60,68,76,79,82,76,62,61,61,61,61,61,64,64,62,60,55,52,48,41,40,66,64,72,71,80,83,75,65,61,61,61,61,61,66,67,65,64,59,56,47,40,40,56,65,72,75,79,80,72,64,61,61,61,61,61,62,66,63,65,63,57,47,42,40,63,58,58,73,73,75,72,63,61,61,61,61,61,64,65,62,63,62,55,46,41,40,56,62,62,63,66,62,61,61,61,61,61,62,65,66,63,61,64,59,51,46,42,41,62,67,61,65,61,62,64,62,61,61,61,61,66,65,61,61,63,58,50,47,42,41,59,71,69,67,61,61,65,62,61,64,67,61,66,67,59,61,61,54,49,45,45,45,55,56,64,69,65,67,64,65,61,64,65,62,66,65,59,60,56,52,55,47,52,52,55,55,57,59,61,65,65,61,64,69,73,70,71,64,59,57,54,56,55,51,55,53,56,54,52,52,52,62,53,54,63,72,72,70,72,63,60,57,55,60,55,57,53,50,58,52,52,52,52,57,53,53,63,69,70,72,72,65,62,57,58,64,58,60,50,47,59,52,52,51,51,52,54,55,53,57,63,73,70,65,60,56,62,66,61,53,43,42,56,53,53,52,50,50,51,54,53,55,57,68,64,60,55,51,62,66,55,44,42,40,55,56,55,54,53,52,54,55,58,55,55,58,56,54,46,48,61,55,43,39,39,39,55,58,54,54,54,54,56,56,54,56,55,53,49,46,44,43,44,42,39,39,39,39,54,54,54,55,55,55,55,55,53,52,52,53,52,48,44,43,41,39,39,39,39,39,54,54,54,54,55,55,55,54,56,58,60,61,58,53,49,45,42,41,39,39,39,39,54,54,54,54,54,56,56,56,56,59,66,66,63,58,50,45,43,41,39,39,39,39,54,54,54,54,55,56,55,56,56,59,67,67,62,58,51,46,43,41,39,39,39,39],
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
