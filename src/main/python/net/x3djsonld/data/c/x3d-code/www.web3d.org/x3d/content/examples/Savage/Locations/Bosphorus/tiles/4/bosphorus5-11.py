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
        texture=ImageTexture(url=['../../images/4/bosphorus5-11.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(40.898245841898074,29.253497503706967,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[126,139,133,115,112,96,96,93,91,79,77,81,89,92,91,90,92,96,95,91,86,86,165,147,140,119,113,110,104,103,97,92,95,97,101,99,91,90,93,91,93,99,88,83,193,173,143,139,151,135,111,113,109,87,108,104,108,104,99,93,95,87,86,89,87,79,217,219,159,169,165,137,124,121,116,116,115,110,106,102,99,94,96,101,91,91,93,90,235,203,198,200,180,155,142,125,123,121,112,110,104,104,102,97,93,96,92,95,92,90,210,194,187,176,177,190,134,124,147,131,119,113,113,110,106,101,95,87,90,97,94,91,206,187,173,161,154,141,157,153,159,134,137,126,130,112,105,102,102,97,90,86,78,76,220,187,179,174,171,175,194,166,152,153,165,160,134,115,109,102,96,93,89,91,79,79,215,201,187,175,211,211,223,184,169,169,163,161,129,117,112,102,94,87,82,80,72,71,236,223,200,203,205,211,215,191,160,155,139,131,121,119,112,104,104,98,94,89,76,69,275,230,220,227,218,215,196,199,183,197,155,147,131,135,123,119,115,101,90,82,75,83,294,260,256,240,239,224,225,271,218,199,152,149,143,150,136,120,102,102,92,84,76,84,291,284,283,261,263,249,234,269,225,182,155,145,141,139,125,107,102,94,92,86,80,82,311,327,354,328,305,281,236,239,207,166,153,144,140,138,146,124,108,99,95,90,82,86,365,420,446,372,357,286,242,216,188,172,166,164,154,134,140,134,119,109,107,98,88,89,383,477,518,465,405,314,250,214,195,178,166,158,149,137,125,122,117,121,124,104,92,94,387,494,467,473,384,331,277,226,207,188,190,180,167,156,146,139,125,122,117,110,105,105,397,487,395,413,391,332,260,233,214,198,190,186,186,177,165,140,149,143,135,141,115,112,402,475,382,322,330,323,263,230,213,204,195,181,180,175,168,163,161,151,150,129,118,115,448,462,436,364,306,255,249,232,218,209,195,177,179,170,165,166,160,141,133,120,114,114,441,427,434,407,352,265,229,220,208,190,183,171,152,159,150,154,153,143,129,138,131,125,428,408,348,344,285,245,205,215,206,191,178,171,158,138,138,142,142,143,144,165,153,146,377,328,301,271,264,216,192,184,190,176,166,164,158,150,127,127,131,124,144,170,173,159,367,326,295,271,263,215,190,178,188,176,163,161,157,153,130,124,130,121,141,169,174,162],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.06225017873692,29.030952729968703,0),geoSystem=['GDC'])))])
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
