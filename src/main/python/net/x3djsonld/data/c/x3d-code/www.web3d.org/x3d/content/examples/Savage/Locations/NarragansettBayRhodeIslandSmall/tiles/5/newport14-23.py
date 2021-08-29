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
        texture=ImageTexture(url=['../../images/5/newport14-23.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.551080519985156,-71.24923386681724,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[62,62,62,59,58,59,58,55,54,54,54,54,52,51,50,50,49,49,48,48,47,46,46,61,63,63,61,58,58,57,55,54,54,54,53,53,51,51,50,49,49,48,47,47,46,45,61,61,59,59,58,57,57,57,55,55,54,54,53,52,51,50,49,49,48,47,46,45,45,60,60,60,60,59,57,56,56,55,54,54,54,53,52,51,50,49,49,48,47,46,45,44,62,60,60,59,59,58,57,56,55,55,54,54,53,52,51,51,50,49,48,47,46,45,43,62,60,58,58,58,56,55,54,56,56,55,54,53,53,52,51,50,49,48,47,46,45,44,63,60,58,58,57,53,51,53,55,56,55,55,54,53,52,51,50,49,48,47,46,45,44,64,61,59,58,55,50,48,52,54,56,55,55,54,53,52,51,51,50,49,47,46,45,44,65,62,61,60,58,54,52,54,55,55,54,54,53,53,52,51,50,50,49,48,46,46,45,65,64,62,60,58,57,56,57,58,57,55,53,53,53,52,51,50,50,49,47,47,45,45,64,63,62,59,57,57,56,57,59,57,55,54,53,52,52,51,50,49,48,47,46,45,45,63,63,63,61,60,59,56,55,56,54,53,53,53,52,52,51,50,49,48,47,46,45,44,63,63,63,63,62,62,59,57,56,55,54,53,53,52,51,51,50,49,48,46,45,45,45,65,64,63,62,62,62,62,60,58,56,55,54,53,52,51,50,49,48,48,46,45,45,45,67,65,64,62,61,62,61,58,55,54,55,54,53,52,51,50,49,48,47,47,46,45,45,65,63,63,62,61,60,60,57,55,55,55,54,53,52,51,50,48,48,47,46,46,46,46,65,63,63,63,61,60,60,58,56,56,55,54,53,52,51,50,49,48,47,46,46,45,45,68,66,64,63,62,62,60,58,57,56,55,54,54,53,52,52,50,49,48,47,46,46,46,68,65,63,63,64,62,61,59,58,57,56,55,54,54,54,53,51,50,49,48,47,47,46,70,67,65,64,64,62,60,59,58,58,57,56,56,56,55,54,52,51,50,49,48,47,47,72,70,67,64,64,64,61,59,58,59,59,59,58,57,56,55,54,52,51,50,49,48,48,69,67,66,66,66,65,63,61,60,59,59,59,59,57,56,55,54,53,52,51,50,49,49,67,66,66,66,65,64,64,62,60,59,59,59,58,57,56,55,54,53,52,51,50,49,48],
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
