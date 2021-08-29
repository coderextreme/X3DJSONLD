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
        texture=ImageTexture(url=['../../images/5/newport10-1.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.51879708887511,-71.42679273792248,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[49,49,50,51,49,50,50,50,51,52,51,50,50,49,49,47,44,40,39,37,34,31,30,49,49,50,51,52,52,52,52,53,53,51,50,51,51,49,47,44,41,40,39,35,33,31,50,52,52,52,53,54,54,53,52,52,52,53,54,52,49,48,47,44,42,41,37,33,30,51,51,51,52,55,55,54,54,54,52,52,55,55,53,50,48,46,44,43,41,37,34,32,51,52,53,54,55,55,54,55,53,52,52,55,55,53,51,49,46,44,43,41,38,36,35,52,53,54,54,55,57,56,55,54,52,52,54,54,52,52,51,49,46,44,42,41,38,36,53,53,54,55,56,60,59,58,54,53,53,56,55,53,51,51,49,46,43,41,39,37,34,55,54,56,57,57,59,60,59,55,53,55,57,57,56,53,51,48,45,42,39,37,36,33,56,57,57,58,58,59,59,57,54,55,57,58,58,56,55,52,49,46,43,40,38,38,37,56,58,60,60,61,61,59,56,52,53,57,58,57,55,54,53,51,48,45,43,40,39,38,58,59,60,62,62,62,60,58,56,56,57,56,55,55,53,52,51,49,45,44,43,41,39,58,60,60,63,62,62,61,60,59,59,58,57,56,55,52,51,50,47,45,44,43,41,39,61,61,63,65,65,64,64,63,60,59,59,57,57,55,52,51,49,47,46,44,43,40,39,61,61,62,63,64,64,64,64,63,62,60,58,58,56,53,52,50,48,45,41,40,39,38,60,59,57,59,60,62,63,64,66,66,64,62,59,58,56,54,51,49,45,41,39,38,36,60,60,60,62,62,64,63,63,66,66,65,63,61,58,56,55,52,49,46,42,41,38,34,62,63,64,65,65,65,63,65,67,68,66,64,63,59,56,54,52,48,45,41,40,37,35,63,65,67,67,66,66,65,64,66,68,66,66,64,59,56,54,52,49,46,42,39,36,36,62,63,65,65,66,65,64,64,65,69,67,64,63,60,57,55,53,48,45,42,37,34,33,62,63,64,66,68,66,65,64,64,66,65,64,63,61,58,55,52,48,43,40,36,34,32,63,65,66,68,70,67,66,66,64,62,62,63,63,62,60,56,53,50,44,40,36,36,33,63,66,67,69,69,68,68,69,64,60,61,62,60,58,58,55,51,49,45,41,37,38,35,63,66,67,68,68,67,68,69,63,59,59,61,59,58,57,55,52,49,45,41,38,38,35],
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
