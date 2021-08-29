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
        texture=ImageTexture(url=['../../images/5/newport25-30.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.71825065109993,-71.13166022549774,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[67,69,67,64,61,57,54,51,48,46,45,44,44,44,44,44,43,43,42,42,41,41,71,71,69,66,62,59,54,50,47,46,45,44,44,44,43,43,44,44,46,44,43,43,71,72,71,67,61,58,53,49,48,46,44,44,43,43,43,43,43,45,45,44,44,43,67,68,70,68,61,58,52,49,47,46,45,44,44,43,43,43,46,47,45,43,44,44,63,62,64,65,61,54,50,49,48,47,46,44,45,45,46,49,50,48,44,44,45,45,60,59,59,58,57,52,50,50,49,48,47,46,46,49,55,54,52,47,43,43,46,46,58,56,56,55,55,53,51,50,49,48,47,47,48,50,53,54,53,48,46,46,47,48,57,55,55,54,53,53,52,51,50,49,49,48,49,51,52,52,51,49,48,48,48,48,55,54,54,54,53,53,53,51,51,50,50,49,50,51,52,52,51,51,51,49,50,49,53,54,54,54,53,53,52,50,50,50,50,50,50,52,51,51,50,51,51,50,50,50,51,53,55,56,55,55,53,51,50,50,50,52,53,52,51,49,49,49,53,52,51,51,50,54,58,60,58,56,55,52,50,50,51,56,55,53,54,51,49,51,53,54,52,53,52,56,60,64,64,60,56,53,53,51,53,56,55,54,53,53,52,53,52,52,54,54,53,58,62,66,66,63,59,58,56,55,58,58,58,56,53,50,52,53,50,51,55,56,50,57,63,65,66,64,62,61,59,58,59,60,59,58,53,48,50,50,49,52,57,57,43,55,60,63,63,64,64,63,60,62,62,62,60,56,51,50,50,49,49,52,56,56,24,46,53,56,56,59,62,63,63,65,65,64,60,55,50,54,50,49,49,50,54,55,16,30,42,46,49,53,59,61,66,68,67,65,61,55,50,50,49,49,49,50,54,54,12,17,29,34,41,48,54,61,68,69,68,63,59,55,53,48,49,49,49,50,53,54,9,11,15,25,34,43,48,57,68,71,66,60,55,51,52,48,49,49,49,50,53,54,7,8,10,18,26,36,43,53,66,68,64,55,51,48,47,49,48,47,49,50,56,56,5,7,8,11,21,30,38,51,62,63,60,51,46,46,46,48,47,48,49,53,57,58,2,5,7,8,16,24,33,44,57,59,54,47,44,45,47,48,47,49,51,57,60,61,1,4,7,8,15,23,33,42,56,59,53,46,44,45,47,48,48,50,52,57,61,62],
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
