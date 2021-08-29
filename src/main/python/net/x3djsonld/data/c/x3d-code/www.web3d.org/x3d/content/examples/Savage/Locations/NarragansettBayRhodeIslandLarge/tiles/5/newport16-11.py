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
        texture=ImageTexture(url=['../../images/5/newport16-11.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.500539965587954,-71.5493819523225,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[36,36,35,35,35,29,30,28,29,30,36,36,35,36,36,37,37,32,30,34,44,45,45,42,38,32,31,30,30,30,30,30,31,33,36,36,36,37,38,35,33,34,39,40,56,51,45,34,31,29,29,30,30,29,29,33,32,34,37,38,38,37,36,35,35,36,65,59,51,42,34,28,27,28,28,27,27,35,31,30,35,38,38,38,38,36,37,38,72,65,56,45,39,35,29,28,28,28,28,27,31,30,30,33,37,35,38,39,38,38,76,71,64,55,45,40,35,30,28,28,27,26,30,30,31,29,30,33,36,36,39,40,82,80,73,65,54,46,40,35,31,28,28,28,27,30,31,32,31,36,34,33,33,32,90,87,80,72,62,51,48,46,38,33,32,30,31,33,34,32,30,30,31,34,33,33,96,92,84,76,68,58,52,51,47,44,41,38,33,35,34,34,33,34,33,32,37,37,100,93,85,78,71,63,53,53,52,47,47,46,41,41,41,36,37,33,32,34,36,37,97,93,85,79,72,68,61,55,52,51,49,48,48,52,52,45,36,30,33,33,34,35,95,90,87,80,75,70,64,57,53,50,51,51,57,56,49,49,47,41,33,37,33,33,87,87,84,80,76,74,71,68,60,58,57,55,55,50,43,44,42,39,36,35,38,38,79,83,88,86,86,82,80,72,65,65,63,61,62,58,51,44,43,45,38,35,36,36,76,80,84,90,89,88,82,77,77,74,70,66,65,66,65,56,48,45,45,41,37,36,74,79,79,80,81,82,85,89,88,84,79,73,69,72,72,69,62,60,54,49,38,38,71,75,75,76,80,83,88,90,89,85,83,78,70,70,75,76,77,77,74,61,44,42,70,74,74,73,77,80,86,89,93,87,81,74,71,71,77,87,89,86,80,65,50,48,71,73,76,74,76,79,82,88,93,93,86,82,77,76,81,88,88,87,80,69,56,54,72,74,75,78,75,79,82,88,92,93,92,88,87,83,86,88,90,89,80,70,62,59,72,72,71,75,79,80,80,84,88,94,93,93,90,88,88,88,90,88,78,71,63,61,72,77,72,73,74,75,80,82,86,87,89,90,90,90,87,89,88,86,82,70,62,61,70,70,72,70,74,76,80,86,87,84,85,87,87,89,88,85,83,82,83,77,66,66,69,69,71,70,75,76,81,86,87,85,85,87,86,87,87,84,82,81,83,78,68,67],
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
