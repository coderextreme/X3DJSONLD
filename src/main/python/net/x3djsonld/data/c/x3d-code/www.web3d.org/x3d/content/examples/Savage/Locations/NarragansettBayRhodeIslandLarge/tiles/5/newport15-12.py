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
        texture=ImageTexture(url=['../../images/5/newport15-12.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.47634988941996,-71.5273965982791,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[60,58,58,59,63,63,64,65,65,64,61,57,53,48,43,39,35,32,28,26,25,25,59,60,60,62,66,68,70,70,68,65,63,59,52,49,46,42,37,35,30,25,23,23,58,59,61,63,67,69,70,70,68,67,64,60,54,52,50,44,38,35,32,28,25,25,54,57,60,63,66,70,71,68,67,65,63,60,56,54,53,50,41,35,32,27,27,27,54,57,59,61,65,68,69,67,66,65,63,61,59,58,56,55,51,41,33,27,25,26,53,58,62,65,70,70,68,66,66,66,66,62,61,58,55,50,44,38,34,31,27,27,52,58,65,69,74,70,69,70,68,67,66,63,60,57,51,46,39,35,32,31,29,28,53,57,64,71,73,70,70,71,70,68,67,64,61,55,48,43,37,34,32,31,28,28,57,60,65,71,71,69,71,72,72,71,68,64,59,53,47,43,39,35,32,31,28,28,60,62,65,68,68,67,70,73,72,69,67,62,57,49,45,42,40,37,32,32,30,30,58,60,64,67,67,66,68,69,70,69,66,62,57,49,44,41,40,37,34,35,33,32,56,59,64,68,68,67,67,68,70,68,66,62,57,52,46,44,41,38,36,37,36,35,55,58,63,67,66,66,68,69,70,68,65,61,56,53,49,46,43,40,41,41,39,39,54,58,61,64,65,66,68,69,69,66,64,61,57,53,48,45,45,43,44,44,43,42,53,57,59,61,64,65,68,68,68,67,64,62,62,58,51,47,46,44,48,47,45,44,52,56,58,60,62,62,67,70,70,69,67,65,63,59,51,50,47,47,50,50,48,47,51,54,56,59,61,60,64,70,70,68,67,65,62,57,54,52,48,49,49,49,48,48,50,52,56,58,59,60,64,68,68,67,67,66,63,58,56,53,48,51,51,48,46,45,46,49,53,55,56,57,58,61,65,67,68,66,64,59,56,54,51,53,53,50,46,45,45,48,51,51,52,52,53,55,61,66,66,67,65,61,58,55,54,53,52,50,45,45,48,50,51,50,51,51,52,55,60,65,66,69,66,62,60,57,56,55,53,50,44,44,48,50,51,48,50,50,51,56,62,67,68,70,69,66,64,60,59,59,58,53,46,46,46,48,49,46,49,49,51,56,61,67,70,72,72,70,67,65,62,61,61,55,51,50,45,48,49,46,49,50,51,56,61,66,69,72,72,70,68,66,63,62,61,55,52,51],
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
