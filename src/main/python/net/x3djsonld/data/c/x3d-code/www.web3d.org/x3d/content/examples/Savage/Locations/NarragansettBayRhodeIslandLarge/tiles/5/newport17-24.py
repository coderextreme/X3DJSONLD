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
        texture=ImageTexture(url=['../../images/5/newport17-24.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.52473004175595,-71.26357234975819,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[51,51,52,57,61,65,68,64,56,57,59,64,64,58,51,47,44,40,35,29,24,23,50,52,56,61,63,64,64,66,64,59,59,57,57,52,51,47,44,41,36,30,25,24,53,53,56,58,63,68,68,66,61,60,59,57,54,50,48,45,43,40,36,32,26,25,48,52,58,62,66,66,66,69,64,61,58,56,52,50,47,44,40,41,37,32,28,27,52,52,59,62,66,72,67,69,65,64,61,54,50,48,47,44,43,41,37,33,28,27,52,54,59,60,62,66,74,74,70,66,60,58,52,49,49,45,45,41,38,34,30,29,53,50,53,51,65,67,79,79,77,65,59,58,55,51,46,46,43,41,39,36,32,32,52,52,55,53,67,69,66,71,68,68,62,60,57,51,51,48,45,39,39,37,34,33,55,52,55,67,57,65,69,70,64,67,62,59,59,58,51,50,47,42,41,38,36,35,57,58,57,68,64,65,65,66,63,63,63,62,59,57,55,54,51,46,44,41,39,38,60,62,60,61,62,62,67,63,64,62,61,61,60,64,70,57,52,50,47,44,41,41,66,64,64,69,62,64,61,61,61,62,64,64,65,65,63,59,56,53,50,46,42,42,69,71,67,63,67,67,64,63,62,62,64,64,63,63,62,61,55,56,52,48,43,42,74,70,74,70,71,68,64,63,62,60,69,65,66,61,60,60,61,59,55,50,44,43,82,80,78,76,72,69,65,65,62,63,63,65,68,70,62,65,62,58,55,50,45,44,85,84,86,80,75,68,68,66,66,62,62,65,67,66,66,65,61,57,53,48,43,42,86,87,89,82,75,73,70,64,65,64,65,65,67,70,65,62,59,54,51,47,42,41,84,88,88,84,81,76,72,69,67,68,67,66,65,62,61,56,54,51,49,45,41,40,84,85,86,86,83,79,75,70,67,68,67,67,63,59,56,51,49,48,47,44,41,40,82,87,84,86,86,80,76,74,70,69,66,63,60,54,54,53,50,47,44,41,38,38,79,81,84,87,87,82,78,75,70,69,65,63,64,56,50,53,49,49,47,45,44,43,78,83,82,88,85,83,81,76,73,68,76,67,63,60,55,55,52,51,50,48,45,45,78,81,83,90,90,85,82,77,75,75,68,67,62,62,58,55,55,51,50,48,45,45,79,81,82,90,90,85,82,77,75,74,69,67,62,62,58,55,55,51,50,48,46,45],
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
