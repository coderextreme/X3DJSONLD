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
    Shape(
      appearance=Appearance(
        material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
        texture=ImageTexture(url=['../../images/5/newport15-1.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.47634988941996,-71.7692354927566,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[115,107,99,93,89,81,73,65,63,65,65,68,70,69,73,74,74,72,73,76,80,81,116,110,103,99,94,86,77,74,69,68,70,71,70,75,73,71,72,70,70,73,80,81,118,110,109,103,96,90,85,83,78,77,73,74,75,76,77,71,64,62,62,63,71,73,113,108,108,103,99,96,91,88,87,82,81,80,76,72,68,63,60,55,53,57,64,65,116,110,108,105,100,98,95,92,89,87,83,78,78,69,60,54,49,48,49,52,53,53,112,108,109,106,102,98,94,94,91,86,80,74,69,63,57,50,44,39,40,41,44,43,111,111,108,105,101,97,93,89,84,77,71,66,60,56,50,44,40,37,35,33,32,32,110,113,111,105,100,95,89,81,74,67,63,57,54,48,40,37,37,35,35,32,30,29,116,118,112,104,97,89,81,72,64,59,54,49,44,39,35,38,38,36,36,31,28,28,115,115,106,98,90,81,74,68,59,54,47,43,39,35,34,37,37,37,35,33,29,28,115,112,104,93,82,71,65,62,61,54,50,45,42,42,43,43,39,36,34,35,30,29,109,106,97,87,76,66,57,53,52,48,43,42,41,45,46,43,39,37,34,33,29,27,108,101,93,86,79,70,62,54,46,44,43,47,49,48,49,46,41,38,36,33,30,29,99,90,82,75,71,72,68,60,52,50,54,58,59,53,46,43,39,38,35,34,32,31,92,83,77,72,70,65,59,54,56,63,67,71,67,58,48,40,36,34,33,31,29,29,83,76,71,68,63,56,55,54,60,66,67,66,63,57,49,43,37,31,31,28,27,27,77,77,75,67,61,58,59,63,65,65,63,61,57,54,51,48,43,35,32,28,27,28,71,69,68,68,63,61,64,71,73,70,69,65,60,55,51,45,38,35,30,30,31,32,69,68,65,69,68,71,73,72,75,76,72,67,61,53,44,37,34,32,33,31,35,35,65,70,71,74,77,73,69,70,70,71,70,62,54,48,40,33,32,32,32,34,37,37,68,71,73,75,80,77,75,72,69,70,65,56,46,40,36,32,33,33,33,34,36,37,72,73,75,71,72,71,73,73,69,62,56,51,43,35,32,32,36,36,35,36,38,40,79,77,73,69,68,70,67,64,61,56,53,49,44,38,37,39,39,38,39,38,42,43,78,76,72,69,67,70,67,64,61,55,52,48,45,39,38,40,40,39,40,38,42,44],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC'])))])
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
