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
        texture=ImageTexture(url=['../../images/5/newport9-22.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.5107262310976,-71.25730472459475,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[54,53,53,55,54,53,52,51,49,48,46,44,42,39,38,37,35,33,32,32,33,33,34,54,53,53,54,53,53,52,50,48,48,47,46,46,43,41,39,38,37,35,34,34,34,35,55,54,53,53,53,54,51,50,49,49,49,47,46,45,42,40,40,39,37,35,35,35,36,55,54,54,53,52,53,51,50,51,51,49,47,45,43,41,40,41,40,39,38,38,38,37,53,54,55,55,54,53,52,52,52,52,49,48,46,44,42,42,43,42,40,40,40,40,39,54,54,54,54,54,51,50,53,53,52,51,50,49,46,44,45,46,45,44,42,41,40,39,55,57,57,55,54,52,52,54,53,52,53,51,49,47,46,47,48,47,46,44,41,40,40,53,57,58,56,54,54,54,53,53,52,52,52,49,47,49,51,49,47,46,43,41,41,41,55,55,55,53,52,53,54,53,54,53,53,52,51,51,54,53,50,48,46,44,43,42,42,55,55,55,54,53,54,54,53,55,55,54,54,53,52,54,53,51,51,49,47,45,44,43,54,56,56,56,55,54,55,54,54,55,56,56,55,54,54,53,53,53,51,49,46,45,44,56,56,57,59,58,58,58,56,56,56,56,57,56,55,55,52,51,52,54,52,49,46,44,57,57,58,59,59,61,61,58,57,57,56,54,54,56,55,53,53,55,57,55,50,47,45,57,59,60,59,57,58,59,58,57,57,56,55,57,59,59,56,56,56,57,56,51,49,48,55,56,60,60,59,59,58,58,60,59,60,59,60,61,60,57,55,53,52,54,53,54,54,57,58,61,61,59,60,59,58,59,59,60,59,59,60,57,56,55,56,56,57,58,60,57,59,59,60,60,60,61,61,61,59,62,64,61,61,60,59,59,59,59,60,60,60,61,57,60,61,63,62,60,60,60,60,60,62,64,63,60,60,60,60,60,61,60,61,60,60,57,61,61,60,61,61,60,60,60,60,60,60,62,62,63,63,65,63,62,62,62,61,58,54,62,59,57,59,61,61,62,63,60,60,60,62,63,64,64,68,67,64,63,61,61,57,54,63,57,55,57,60,61,64,65,62,62,63,62,62,63,63,64,63,61,61,59,59,58,57,61,57,56,60,63,64,65,64,61,61,62,63,64,66,64,61,61,62,65,61,59,58,58,61,57,58,61,64,64,64,62,60,61,61,63,65,68,66,62,63,63,65,62,59,58,58],
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
