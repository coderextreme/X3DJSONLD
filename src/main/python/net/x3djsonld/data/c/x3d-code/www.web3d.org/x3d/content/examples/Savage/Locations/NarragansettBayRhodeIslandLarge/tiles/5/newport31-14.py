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
        texture=ImageTexture(url=['../../images/5/newport31-14.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.86339110810791,-71.48342589019228,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[28,30,35,36,38,41,41,41,42,51,48,47,42,42,44,47,53,62,71,76,77,76,29,30,36,40,40,39,39,41,43,48,48,48,47,43,44,47,54,63,71,77,79,79,32,36,38,38,42,48,41,40,44,46,47,50,52,48,47,51,57,62,68,75,79,79,35,47,50,49,43,43,46,44,42,44,46,50,54,54,57,57,59,63,70,74,79,80,46,51,53,55,52,46,44,42,42,41,44,48,55,59,60,62,64,66,70,75,79,80,46,53,58,62,63,63,55,51,47,41,41,46,51,54,57,62,66,68,71,75,80,81,50,54,55,59,61,62,58,56,54,48,45,41,42,59,68,72,70,69,72,76,80,81,49,51,53,56,60,57,58,57,56,55,51,46,40,51,64,70,71,72,77,78,81,82,52,53,56,57,56,60,59,58,58,60,60,62,61,56,64,71,75,76,80,80,82,82,56,58,59,63,64,65,60,66,64,65,67,69,66,64,69,74,78,82,84,82,83,83,59,66,69,71,72,71,71,75,75,79,80,78,72,66,66,76,78,81,79,80,83,82,67,74,79,76,74,77,79,76,84,94,91,88,75,66,61,66,75,73,76,77,78,77,71,77,81,79,81,81,81,82,88,93,97,95,84,71,61,61,63,70,70,73,74,74,72,79,81,85,81,81,84,90,93,95,96,91,86,77,68,61,61,62,64,69,68,67,75,80,87,88,90,94,96,92,91,93,96,92,86,77,70,65,61,61,61,64,63,62,82,88,89,94,97,101,99,99,100,98,94,88,86,83,71,64,61,61,62,62,61,61,90,93,97,100,101,101,98,99,104,101,96,91,84,78,69,64,61,62,61,61,61,61,93,95,97,101,104,107,102,108,107,98,88,84,82,80,68,64,62,61,61,61,62,61,97,97,97,99,103,108,111,108,104,98,91,87,81,73,70,64,61,61,61,62,62,62,91,93,94,98,105,106,106,106,103,101,95,90,77,71,68,61,61,62,61,63,66,66,97,96,95,94,97,101,102,102,101,96,89,78,73,73,65,62,67,68,64,64,70,70,99,102,98,101,102,101,96,97,91,88,81,75,71,66,62,73,73,72,68,66,72,72,106,109,109,110,106,100,96,87,80,79,79,76,71,66,68,77,78,77,71,69,74,74,107,109,111,111,106,101,97,86,79,77,78,76,71,67,68,77,80,78,73,69,74,75],
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
