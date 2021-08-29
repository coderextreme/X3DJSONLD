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
    GeoLOD(center=(41.52473004175595,-71.50541124423569,0.0),range=6150.5674,child1Url=['../../tiles/5/newport16-12.x3d'],child2Url=['../../tiles/5/newport16-13.x3d'],child3Url=['../../tiles/5/newport17-12.x3d'],child4Url=['../../tiles/5/newport17-13.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport8-6.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.500539965587954,-71.5273965982791,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[55,60,61,70,69,65,58,51,48,50,47,40,45,54,58,58,45,26,18,17,14,13,51,56,58,65,67,66,58,53,52,48,43,41,42,47,57,51,36,23,19,20,19,18,50,50,51,55,65,69,62,57,54,49,44,45,43,46,45,43,29,21,22,22,22,20,48,46,49,56,67,72,70,65,61,55,47,49,42,41,35,34,30,23,21,23,24,24,42,46,50,60,72,76,78,73,68,59,55,47,51,48,42,36,31,28,24,27,30,30,41,46,54,65,76,80,81,76,72,65,55,53,53,49,50,43,37,34,29,34,38,37,32,39,53,66,74,83,86,82,74,66,61,56,54,56,51,49,46,43,40,38,40,38,40,36,48,59,70,80,84,82,75,70,65,62,56,50,49,48,46,41,40,37,36,37,35,37,46,59,68,71,78,80,74,67,60,58,58,53,51,45,41,43,39,43,42,45,36,34,41,57,66,70,74,76,69,62,57,60,60,61,60,59,50,48,45,41,46,42,39,42,39,45,59,68,69,69,65,56,57,57,61,63,60,62,63,53,48,46,40,38,38,40,43,43,44,54,63,64,55,54,56,58,64,67,65,61,63,59,57,51,48,45,43,35,39,38,40,41,49,55,58,62,62,65,67,68,64,64,62,65,69,67,66,64,58,41,37,37,35,40,39,46,56,61,62,63,64,65,65,66,71,68,78,75,74,72,62,60,44,36,41,40,40,41,48,53,57,56,61,62,71,70,69,72,69,67,66,63,71,65,59,47,38,39,37,44,44,50,48,48,51,51,51,62,65,66,76,71,62,59,69,76,69,51,35,38,40,42,42,44,42,43,43,49,54,56,63,67,65,73,67,64,68,76,69,58,42,39,37,40,46,42,36,38,43,45,49,53,54,59,59,61,60,61,68,75,70,64,50,39,42,48,45,40,50,52,51,51,46,51,52,53,51,55,56,54,66,76,74,62,54,42,45,52,52,50,51,49,50,50,50,48,54,53,67,54,41,41,52,63,66,55,45,43,46,48,50,50,53,51,50,48,51,52,58,57,58,50,40,36,51,62,65,55,45,43,46,48,50,50,53,51,50,48,51,52,58,59,57,48,39,35],
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
