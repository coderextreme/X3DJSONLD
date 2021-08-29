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
        texture=ImageTexture(url=['../../images/5/newport30-13.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.839201031939915,-71.50541124423569,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[79,85,88,85,81,76,70,67,65,65,63,64,63,59,60,65,61,60,61,61,61,61,83,93,96,94,92,82,75,68,65,62,62,60,59,56,61,64,61,60,59,59,59,59,91,101,101,100,95,85,81,63,61,59,58,56,56,56,58,60,59,59,58,57,55,54,92,102,110,108,95,90,80,68,59,57,57,57,56,56,58,58,57,57,56,54,50,49,98,104,106,102,96,91,84,71,64,58,57,57,57,57,60,60,55,53,51,47,44,44,94,102,104,101,97,88,84,67,67,59,58,58,58,59,60,60,57,50,45,45,43,42,89,98,102,100,92,88,78,77,63,61,60,60,59,59,60,58,55,51,51,52,48,47,94,92,95,96,90,87,78,74,66,62,62,61,58,57,56,56,55,55,56,55,49,47,97,96,95,95,90,83,77,68,64,63,60,59,58,58,57,55,54,55,55,52,42,41,98,101,102,93,89,80,74,68,67,64,61,60,60,61,59,56,56,51,47,43,40,40,93,100,101,92,85,76,73,70,68,67,66,65,62,61,60,54,54,52,48,44,39,38,87,91,91,88,83,76,75,74,72,70,69,67,64,61,58,52,47,45,42,40,37,37,83,85,85,84,79,78,80,75,74,73,71,69,65,62,59,55,48,43,41,39,37,36,83,86,83,83,79,79,71,79,77,75,72,68,64,60,55,49,43,41,41,40,38,38,90,89,81,74,72,72,72,72,74,72,66,62,60,55,48,43,41,41,43,41,37,36,87,83,81,80,69,66,69,61,60,56,54,52,47,45,46,47,48,49,46,41,38,37,85,84,76,75,81,78,72,66,66,65,60,57,52,50,54,56,57,53,47,41,37,35,81,81,83,84,85,85,83,86,79,77,73,66,56,56,61,63,60,54,48,41,39,39,86,87,91,88,84,85,87,90,84,78,73,65,57,60,65,65,60,54,47,41,36,35,90,89,90,91,90,89,88,87,83,78,71,63,68,69,69,66,58,50,42,38,34,33,90,89,89,89,90,89,87,84,80,72,69,73,74,73,72,65,54,44,40,37,31,30,92,87,81,88,83,82,90,79,74,76,77,77,76,74,73,63,50,41,40,36,29,28,85,88,85,84,85,81,82,78,83,82,81,81,78,75,69,58,46,40,38,31,28,28,84,88,86,85,85,82,81,80,84,84,83,82,78,75,69,57,45,40,37,31,28,28],
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
