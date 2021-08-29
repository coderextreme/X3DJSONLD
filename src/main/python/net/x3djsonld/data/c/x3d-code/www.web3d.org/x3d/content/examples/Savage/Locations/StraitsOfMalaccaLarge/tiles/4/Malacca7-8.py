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
        texture=ImageTexture(url=['../../images/4/Malacca7-8.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(-0.6602065014657854,100.89750038406439,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.048130956,zDimension=22,zSpacing=0.04797024,height=[214,156,159,201,464,507,265,118,343,114,245,300,108,96,106,111,132,77,52,75,91,80,198,157,286,539,661,191,291,111,398,323,196,87,74,114,119,142,110,94,127,61,38,47,195,421,949,314,376,233,193,439,295,156,90,83,91,71,126,126,110,113,92,61,43,58,304,332,563,247,303,256,553,314,187,159,125,113,132,70,50,114,66,87,72,70,70,62,318,347,613,339,455,341,345,89,245,185,129,150,142,107,68,52,74,62,50,41,75,53,663,900,405,561,328,327,555,117,280,142,90,144,128,111,98,43,43,40,45,81,67,51,402,1215,474,611,404,794,439,149,104,64,127,118,99,92,86,81,66,80,71,67,108,118,1224,780,191,584,288,398,301,224,122,61,101,107,81,78,71,71,94,106,93,70,102,100,840,443,170,397,183,654,200,83,73,50,79,94,55,71,66,116,110,109,98,91,79,70,267,736,416,105,242,376,195,89,102,67,101,69,65,53,76,139,144,130,114,102,88,82,774,734,145,340,113,274,126,104,39,76,86,74,40,114,119,118,144,126,114,90,83,88,313,417,258,352,48,106,98,68,38,91,56,58,85,118,109,112,128,117,100,68,73,76,402,184,174,134,47,36,84,76,59,110,57,59,104,125,82,74,113,92,95,76,49,55,203,327,319,73,102,68,26,42,36,72,37,89,103,102,78,68,93,87,70,40,52,44,474,412,63,66,147,67,111,34,94,45,60,68,72,72,65,69,77,74,57,18,14,21,245,133,74,183,103,181,26,29,43,57,82,66,62,70,63,46,46,62,48,39,31,31,114,151,208,113,190,40,97,49,27,38,61,24,43,48,52,31,31,28,29,23,29,27,157,336,475,313,55,93,56,54,51,18,30,29,31,27,30,22,23,30,38,24,23,15,281,385,456,62,86,46,63,103,50,37,29,22,19,21,22,28,30,38,47,27,22,22,93,165,88,114,82,105,102,66,48,39,28,21,32,25,28,20,20,22,26,29,5,6,158,58,105,99,84,97,69,51,41,37,30,22,36,26,15,17,16,9,16,9,5,6,131,61,96,97,81,97,65,48,40,37,32,22,32,25,13,17,15,8,18,7,5,5],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.3471685463819618,100.89750038406439,0),geoSystem=['GDC'])))])
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
