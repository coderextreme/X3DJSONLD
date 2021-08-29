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
        texture=ImageTexture(url=['../../images/5/newport30-31.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.680214244425336,-71.18466700459715,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[45,50,53,57,59,62,64,66,68,69,70,70,70,69,69,68,67,66,64,62,60,59,58,44,48,52,56,60,62,64,66,68,70,70,71,70,70,70,69,68,67,65,63,60,59,58,43,46,51,56,60,62,64,66,68,70,71,72,72,71,71,70,69,68,66,64,62,60,59,42,45,50,55,60,62,64,66,68,70,72,72,73,73,72,71,70,69,68,66,63,61,60,41,44,49,55,60,62,64,66,68,70,71,73,74,74,75,73,72,70,69,67,65,63,63,40,42,47,55,60,62,64,66,68,69,71,72,74,74,75,75,73,72,71,68,67,66,66,39,41,45,52,58,61,63,66,67,69,70,72,73,74,75,75,75,73,72,70,69,69,68,38,40,43,49,55,59,62,65,66,68,69,71,72,74,75,75,75,74,73,72,71,69,69,35,38,42,47,51,56,60,62,64,66,68,69,71,73,75,75,76,75,74,73,72,70,69,29,33,39,45,51,55,57,60,62,64,66,68,70,73,74,76,76,76,75,74,73,71,70,25,28,35,43,49,52,55,58,60,62,64,66,68,71,74,75,77,76,76,76,75,73,72,21,25,32,39,46,49,52,55,58,60,62,64,67,70,72,74,76,77,77,77,77,76,74,18,23,29,35,42,46,49,52,55,57,60,62,65,67,70,72,75,77,78,78,78,77,76,16,21,26,32,37,43,47,49,52,54,57,60,63,65,68,70,73,75,76,75,75,75,75,16,18,23,27,31,37,44,47,48,51,53,57,61,64,66,68,71,73,74,74,74,73,72,15,17,20,24,26,31,39,44,45,48,50,54,58,63,65,66,68,70,72,72,71,70,70,15,17,19,22,24,27,34,39,42,44,47,50,54,60,63,65,66,68,69,69,70,69,69,15,16,18,20,22,25,29,35,39,41,44,47,50,57,61,62,64,65,66,67,68,68,67,15,16,17,19,20,23,26,31,35,37,42,44,47,52,58,60,62,63,64,64,66,66,66,15,16,17,19,20,22,27,30,33,35,39,42,45,48,55,58,59,60,61,62,62,62,62,16,17,18,19,21,23,27,30,33,36,38,40,43,46,51,55,56,58,59,59,60,60,60,16,17,19,21,22,23,27,30,32,35,36,38,41,44,48,53,55,56,57,58,58,58,58,16,18,19,21,22,24,27,29,32,34,36,38,40,43,47,51,54,55,56,57,57,58,57],
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
