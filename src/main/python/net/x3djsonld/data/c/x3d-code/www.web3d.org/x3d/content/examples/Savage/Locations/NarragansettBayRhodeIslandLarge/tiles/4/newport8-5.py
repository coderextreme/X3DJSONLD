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
    GeoLOD(center=(41.52473004175595,-71.5493819523225,0.0),range=6150.5674,child1Url=['../../tiles/5/newport16-10.x3d'],child2Url=['../../tiles/5/newport16-11.x3d'],child3Url=['../../tiles/5/newport17-10.x3d'],child4Url=['../../tiles/5/newport17-11.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport8-5.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.500539965587954,-71.57136730636591,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[33,34,35,35,34,33,31,34,33,32,33,34,28,31,31,31,32,32,31,39,53,55,34,35,35,34,33,33,33,33,32,33,33,34,29,28,33,32,31,32,31,39,48,51,36,35,36,35,33,33,38,40,35,35,33,32,32,26,32,33,33,31,28,37,49,50,35,35,36,36,37,38,49,54,49,40,34,35,31,28,29,36,36,36,35,32,47,48,40,41,38,36,38,52,57,62,68,63,54,40,30,29,29,31,33,37,38,36,37,42,37,40,38,37,43,50,66,72,74,75,69,51,37,29,28,26,30,30,35,39,39,41,42,42,38,34,34,44,64,80,87,88,85,72,51,40,29,28,30,31,34,35,31,32,36,40,37,38,39,41,58,85,93,97,96,81,66,50,47,45,37,36,35,31,40,40,36,36,44,46,40,43,55,74,88,96,94,83,71,59,51,50,55,51,40,33,32,35,36,36,48,50,47,51,50,60,69,77,81,87,84,76,63,60,58,47,43,36,37,36,36,39,50,63,70,68,60,57,59,67,78,80,82,88,85,76,70,71,61,52,37,39,36,44,53,67,72,76,75,63,61,67,73,74,79,86,92,78,71,83,89,74,46,38,45,47,52,63,71,79,79,68,66,67,73,78,77,84,94,90,84,87,90,75,54,43,42,43,56,62,65,69,70,75,70,70,76,72,74,80,84,88,90,87,85,79,61,58,42,48,62,74,68,62,63,66,70,69,70,71,74,87,92,94,85,78,73,65,65,62,48,51,63,73,71,65,65,62,69,70,71,80,84,85,94,99,100,82,56,60,72,71,46,51,62,70,73,67,66,64,61,65,77,87,91,89,96,97,100,88,66,52,66,69,44,46,58,72,81,82,72,68,66,63,67,81,82,89,86,86,85,74,60,58,63,68,41,48,50,65,74,86,80,73,75,72,67,63,69,77,86,71,66,70,61,54,63,68,40,44,49,56,66,75,77,76,80,78,70,54,60,71,77,67,63,55,59,54,58,66,49,46,53,53,55,61,66,71,81,81,74,56,53,54,58,59,56,53,48,48,52,52,48,47,53,52,54,60,65,72,81,81,75,57,52,52,56,60,56,53,47,48,51,51],
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
