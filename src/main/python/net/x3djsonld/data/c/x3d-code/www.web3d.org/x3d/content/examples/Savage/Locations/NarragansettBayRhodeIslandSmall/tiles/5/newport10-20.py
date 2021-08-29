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
        texture=ImageTexture(url=['../../images/5/newport10-20.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.51879708887511,-71.27344644014977,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[65,63,58,60,63,63,60,56,55,56,54,52,49,49,48,46,46,44,44,42,44,45,45,64,62,61,60,61,62,60,58,55,54,52,53,53,50,48,48,48,47,44,44,44,44,45,64,64,63,61,60,59,60,59,55,52,52,53,53,51,48,49,50,50,47,48,47,45,45,63,61,61,62,60,59,59,58,56,54,53,54,53,50,50,51,51,50,50,50,48,45,44,62,62,62,62,61,60,59,58,58,57,55,54,51,51,51,50,48,47,49,50,47,46,46,64,66,66,63,62,61,57,56,56,56,54,52,52,53,54,51,48,48,49,48,46,46,45,62,63,63,63,62,61,60,59,57,58,56,53,53,53,53,51,50,50,50,48,46,45,44,62,63,63,63,64,64,63,60,59,57,55,53,52,53,53,53,52,49,47,45,44,44,44,62,62,63,63,63,63,61,61,59,57,56,53,53,52,52,53,51,49,46,45,44,44,44,62,62,62,62,60,58,58,61,61,61,59,56,56,54,51,51,51,50,47,47,46,44,44,61,63,62,60,60,60,60,60,60,61,62,58,55,53,51,50,50,47,46,46,46,45,44,61,60,60,60,61,62,63,61,61,60,60,59,57,55,53,51,49,46,46,46,47,48,46,61,61,60,58,58,60,62,63,62,61,60,60,59,56,54,53,53,49,47,47,48,48,46,60,60,60,61,61,61,63,63,64,64,60,59,59,57,56,55,54,51,48,48,49,49,47,59,59,60,62,63,61,60,63,63,63,62,60,58,58,58,56,55,52,48,48,48,47,48,58,60,61,61,61,61,63,65,63,63,64,62,60,59,56,54,53,52,50,49,47,47,49,59,60,60,62,62,62,63,65,63,62,61,60,60,60,57,55,55,54,51,51,50,49,50,61,60,61,62,62,62,64,64,62,62,61,61,59,58,56,56,56,54,51,51,51,49,50,69,67,62,60,61,61,64,65,62,62,62,61,59,57,56,56,55,54,53,51,50,50,50,81,77,66,59,57,58,60,61,61,60,59,59,57,55,55,54,52,53,55,53,50,51,49,77,76,66,59,58,59,60,61,61,59,57,56,55,53,53,52,52,53,55,53,50,50,50,70,70,65,60,58,59,59,59,58,58,59,57,57,56,56,54,53,52,54,53,50,49,49,66,66,63,60,58,58,57,57,57,58,60,59,60,58,57,54,53,52,53,52,50,49,49],
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
