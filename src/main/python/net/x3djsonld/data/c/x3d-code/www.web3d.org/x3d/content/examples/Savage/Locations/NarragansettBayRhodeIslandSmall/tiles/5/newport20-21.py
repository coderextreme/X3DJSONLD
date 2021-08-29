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
        texture=ImageTexture(url=['../../images/5/newport20-21.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.599505666650224,-71.26537558237226,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[47,48,47,47,49,52,50,48,48,50,53,55,58,61,64,65,61,59,60,60,60,61,61,46,45,45,48,50,52,53,51,50,51,52,54,56,59,61,61,59,59,61,61,61,63,65,46,46,47,50,49,48,52,52,51,51,51,53,56,58,59,59,60,61,62,62,62,63,65,47,45,46,46,47,47,48,49,49,51,52,53,56,59,60,62,64,64,64,63,61,60,60,46,47,48,48,47,48,48,49,48,48,50,53,55,60,62,65,68,68,66,62,61,61,60,46,48,49,49,48,49,49,49,50,52,51,53,54,56,60,64,65,65,65,66,66,64,60,43,46,50,49,49,51,52,50,52,52,52,53,54,55,58,62,64,64,65,67,69,66,62,47,47,47,46,48,49,50,50,51,50,52,54,56,55,57,63,68,67,65,64,66,65,62,48,49,49,48,48,49,51,52,54,54,55,55,56,55,56,59,64,68,67,64,62,61,61,47,48,50,51,50,50,53,54,57,59,57,55,56,59,58,57,58,62,65,64,60,57,57,47,47,47,47,50,51,55,54,56,60,60,59,61,65,64,60,56,58,59,59,56,54,54,50,50,49,48,50,52,53,55,57,58,57,59,60,63,64,62,57,53,55,56,56,53,52,52,53,52,51,51,52,55,58,58,55,55,55,55,58,58,57,54,51,52,53,53,53,51,54,53,52,50,50,53,57,61,58,55,53,52,51,53,51,51,52,51,49,50,51,50,51,56,55,54,53,52,53,54,56,55,53,53,52,52,52,50,48,49,51,50,48,48,49,48,56,58,57,56,55,53,51,52,51,51,52,52,51,49,46,46,47,47,49,47,45,45,44,56,57,58,57,56,53,51,50,49,50,49,49,48,46,44,45,43,44,46,45,45,43,39,53,55,56,56,56,53,50,49,47,47,46,47,48,47,42,42,42,42,44,45,43,42,39,51,53,55,56,56,53,50,47,46,46,45,44,43,43,40,39,39,39,39,40,40,38,38,49,50,53,54,53,52,50,46,44,44,43,42,39,38,38,37,37,37,35,34,36,33,34,46,47,48,51,52,51,49,46,44,41,40,41,40,39,38,36,36,36,32,30,30,30,28,43,43,44,46,46,47,46,45,44,39,37,39,38,37,36,33,31,29,26,25,26,26,27,42,42,43,43,43,44,44,44,43,38,36,37,36,35,34,31,29,27,23,23,24,24,25],
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
