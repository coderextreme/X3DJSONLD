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
        texture=ImageTexture(url=['../../images/5/newport20-22.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.599505666650224,-71.25730472459475,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[61,61,62,61,60,60,61,58,57,56,56,60,62,63,60,64,66,68,71,73,74,74,74,65,64,64,63,59,59,60,59,57,56,57,57,58,59,59,61,64,67,70,72,74,74,72,65,65,66,64,61,60,59,59,58,57,55,55,56,57,59,62,63,64,66,68,66,67,68,60,63,64,64,65,63,59,59,59,57,56,55,54,55,58,60,62,62,63,64,64,63,63,60,61,62,63,65,63,61,60,60,59,57,53,52,52,52,55,59,59,60,63,63,60,59,60,60,61,61,62,59,59,60,58,55,55,53,50,51,52,55,58,60,61,59,58,57,56,62,59,59,59,60,59,59,58,55,51,50,49,47,49,50,53,55,58,59,57,56,55,53,62,60,58,58,60,60,56,55,54,52,50,47,44,44,46,49,51,53,54,54,53,53,51,61,60,55,55,56,56,54,51,51,50,50,48,44,42,45,48,51,53,53,51,50,50,49,57,55,54,52,52,53,52,49,49,50,50,47,43,42,45,49,51,53,51,47,45,45,46,54,53,53,51,48,48,49,49,48,48,49,46,43,42,44,47,49,49,49,44,42,41,44,52,50,48,49,47,47,47,49,49,47,45,43,41,41,42,42,42,43,45,43,41,40,41,51,49,46,47,48,47,47,49,45,43,40,39,38,40,40,40,41,41,41,40,39,39,38,51,50,47,47,46,46,45,44,41,38,36,37,37,38,40,41,41,41,38,37,37,36,37,48,47,45,43,41,41,40,40,38,36,35,36,35,36,38,38,38,36,35,34,33,33,35,44,43,41,40,38,36,36,36,35,35,34,35,35,36,36,36,34,34,33,33,33,31,32,39,39,38,37,36,34,31,33,33,33,34,34,35,36,36,36,35,36,35,34,32,31,30,39,37,36,35,33,30,30,30,31,33,34,34,32,33,35,37,38,37,34,32,31,31,30,38,36,34,31,30,28,28,28,28,31,32,32,31,31,32,32,34,32,29,28,30,31,31,34,32,32,29,28,28,27,27,30,32,31,29,29,29,30,29,30,29,27,27,28,30,31,28,27,28,26,27,25,25,27,30,30,29,29,30,30,29,29,29,29,28,30,30,30,30,27,26,27,23,24,27,29,27,28,29,30,29,30,29,28,28,29,29,30,31,32,31,29,25,26,26,24,23,28,31,29,28,28,31,30,29,28,28,28,30,30,32,32,34,33,31],
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
