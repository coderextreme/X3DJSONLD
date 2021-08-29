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
        texture=ImageTexture(url=['../../images/5/newport22-31.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.615647382205246,-71.18466700459715,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[19,24,29,31,33,32,33,36,40,44,46,46,47,48,48,49,49,50,50,51,51,51,51,22,27,32,35,35,33,33,35,39,43,45,46,47,48,48,48,49,50,50,51,51,52,52,27,30,34,38,37,35,34,36,39,43,46,47,48,49,50,50,50,51,51,52,52,52,51,30,33,36,38,38,38,37,38,40,44,46,48,49,51,52,52,53,54,53,53,53,51,51,32,36,39,40,41,41,42,41,42,44,46,48,49,51,53,54,56,57,57,56,55,53,52,37,42,43,43,44,45,45,45,46,46,47,49,50,51,54,55,58,60,60,59,57,54,53,43,46,45,45,46,48,49,49,50,50,50,52,53,54,54,55,56,58,58,58,56,55,55,45,46,46,46,48,50,51,52,52,52,52,54,55,56,56,56,56,56,56,56,56,57,57,47,46,46,47,48,51,53,54,53,53,53,55,57,58,59,59,58,57,56,56,56,57,58,44,45,46,48,50,51,53,55,55,54,54,56,57,59,61,62,61,59,58,57,56,57,58,42,44,47,50,51,52,53,55,56,55,55,56,58,60,62,64,63,61,60,59,57,57,58,39,42,46,50,52,54,54,55,55,55,56,57,58,59,60,61,62,62,61,60,59,59,59,34,39,45,50,53,54,55,55,55,56,57,57,57,58,58,59,60,61,61,61,62,62,61,32,37,43,48,52,53,54,55,55,55,56,57,57,58,58,59,60,60,60,61,61,61,61,29,33,39,46,49,51,53,54,55,55,56,57,57,59,61,62,60,60,60,61,61,60,59,24,27,33,40,45,49,52,54,55,56,57,57,58,61,63,64,62,60,61,61,60,59,58,24,25,28,34,40,46,50,53,55,57,59,59,60,62,64,65,63,62,61,61,60,58,58,24,25,27,30,37,43,48,52,55,58,60,61,61,62,63,64,64,63,63,63,62,60,59,26,28,28,29,35,41,45,50,53,56,60,62,62,62,62,63,64,65,65,65,64,61,60,30,31,30,30,32,37,43,47,50,54,58,60,61,61,61,62,63,66,67,66,65,62,61,32,33,32,31,32,33,38,43,47,51,56,59,60,60,60,61,62,64,66,68,67,65,63,35,35,34,33,33,33,34,40,44,48,53,56,57,59,59,59,60,62,63,65,67,65,63,36,36,36,35,34,33,34,39,43,47,51,54,56,58,58,58,59,61,62,63,65,64,63],
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
