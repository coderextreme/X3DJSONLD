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
        texture=ImageTexture(url=['../../images/5/newport10-19.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.51879708887511,-71.28151729792728,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[45,46,46,45,46,48,50,51,51,55,59,60,62,65,66,66,67,67,68,67,67,66,65,47,48,48,47,48,48,50,52,51,55,57,60,61,63,63,66,68,67,66,66,66,66,64,48,48,49,49,49,49,49,52,53,55,55,60,61,63,63,64,65,65,65,66,65,65,64,47,48,49,48,48,48,48,51,54,55,56,61,60,61,64,64,63,63,65,67,65,65,63,48,50,50,49,50,49,48,50,51,53,56,60,60,59,61,62,62,63,64,65,64,63,62,50,50,51,51,52,52,50,49,50,52,54,55,56,58,60,61,62,64,63,63,63,64,64,50,50,51,51,52,51,50,50,50,52,53,54,55,55,56,59,60,61,64,64,63,61,62,50,50,50,51,51,51,52,53,51,51,51,52,53,55,55,58,61,64,65,63,62,61,62,52,51,51,51,50,51,53,53,52,51,51,52,53,56,58,60,61,63,63,62,62,64,62,50,51,50,50,51,53,53,52,51,52,54,55,57,59,60,59,61,61,60,60,62,63,62,51,51,50,50,51,52,52,51,52,54,55,56,58,59,61,60,59,60,61,59,58,57,61,51,52,51,51,51,51,51,50,53,52,52,53,54,55,57,58,57,58,60,60,60,59,61,52,51,51,51,50,51,51,51,52,52,52,54,53,53,55,58,58,57,57,60,61,60,61,52,51,51,52,51,50,49,50,52,56,54,53,53,53,54,58,58,58,59,59,60,60,60,52,51,52,53,52,51,50,51,53,55,55,53,53,54,56,58,59,59,60,60,60,59,59,50,50,53,54,52,52,53,53,52,53,55,54,54,56,58,57,58,59,58,59,59,58,58,52,50,52,53,52,52,51,52,52,52,55,55,55,56,57,58,59,60,58,58,59,59,59,53,52,52,52,51,52,51,51,52,52,53,55,56,56,56,57,59,60,60,59,59,60,61,52,51,51,53,52,51,51,50,50,51,51,52,54,55,55,56,57,59,61,62,64,68,69,50,50,51,51,50,50,52,53,53,51,52,53,54,55,55,55,55,57,60,64,71,78,81,49,50,50,50,50,51,53,55,54,51,52,52,53,54,55,55,55,56,59,64,72,77,77,49,48,47,49,51,54,55,55,52,51,52,53,54,55,56,57,58,57,60,64,69,70,70,50,49,47,48,50,53,55,54,52,51,52,53,54,55,57,58,59,58,60,64,66,66,66],
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
