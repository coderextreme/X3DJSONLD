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
    GeoLOD(center=(41.573110194091946,-71.50541124423569,0.0),range=6150.5674,child1Url=['../../tiles/5/newport18-12.x3d'],child2Url=['../../tiles/5/newport18-13.x3d'],child3Url=['../../tiles/5/newport19-12.x3d'],child4Url=['../../tiles/5/newport19-13.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport9-6.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.54892011792395,-71.5273965982791,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[51,62,65,55,45,43,46,48,50,50,53,51,50,48,51,52,58,59,57,48,39,35,47,45,46,46,43,45,49,54,52,56,51,54,52,52,53,49,46,50,45,33,24,24,46,44,47,41,47,49,50,55,55,55,52,54,55,56,51,47,47,47,34,33,26,27,51,47,48,52,54,54,52,49,53,43,52,52,55,57,52,40,44,33,34,27,44,44,49,55,54,55,56,57,59,58,56,56,47,49,52,54,52,52,34,25,22,36,44,43,54,58,54,59,62,69,68,68,66,59,52,47,49,50,51,48,28,26,23,25,31,30,59,58,60,64,72,76,73,62,52,51,53,51,52,48,42,45,35,25,20,20,19,18,59,56,60,64,75,77,72,61,47,50,49,52,40,37,35,34,35,31,22,21,21,18,61,63,59,60,67,73,66,62,62,52,57,47,38,42,41,38,32,35,29,24,20,19,65,64,60,58,59,63,66,64,62,61,59,45,38,36,37,35,32,28,28,30,23,21,60,58,56,58,57,64,65,64,65,60,44,40,37,34,36,34,32,31,30,32,26,24,59,58,59,59,67,65,64,67,63,56,50,38,32,35,38,33,34,39,31,27,21,23,59,61,63,61,65,66,67,66,63,51,39,36,36,36,34,36,41,36,33,23,17,15,61,58,64,61,65,66,67,67,63,54,38,34,36,33,32,44,40,32,27,21,15,14,63,64,58,59,62,70,75,76,74,62,49,35,34,32,35,35,35,27,22,19,16,16,65,65,66,64,69,72,70,73,66,54,47,37,32,31,35,33,30,25,24,20,19,19,68,67,65,67,71,74,76,69,62,52,47,39,31,32,35,39,26,33,27,26,28,27,71,67,69,70,75,76,78,74,69,60,52,43,40,33,35,35,38,34,30,32,29,26,73,70,68,70,72,75,77,74,61,57,55,45,37,36,37,33,39,30,36,26,24,23,73,71,73,76,75,78,70,70,63,54,48,38,40,34,31,39,32,34,27,25,26,25,72,75,85,86,87,78,75,69,67,65,60,50,42,40,36,28,25,25,30,34,32,31,73,76,86,86,87,79,75,70,69,66,61,51,42,39,36,28,25,25,31,32,32,30],
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
