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
        texture=ImageTexture(url=['../../images/4/world13-10.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(56.20833769188965,44.95834003882254,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=1.0714287,zDimension=24,zSpacing=0.48913044,height=[184,251,306,175,126,61,135,91,248,308,108,208,479,878,531,277,188,130,142,87,158,157,186,161,300,192,45,122,136,211,289,135,247,84,173,527,623,305,208,186,165,84,152,149,192,156,180,127,172,66,110,190,155,208,103,178,182,440,620,334,232,174,164,129,152,142,198,171,95,130,152,124,81,130,69,125,71,207,219,257,562,298,181,168,127,135,143,117,76,170,172,120,150,122,196,122,104,179,172,143,186,234,331,448,180,146,74,114,59,102,89,113,97,112,152,168,138,137,166,81,190,172,340,263,399,385,222,154,136,132,73,111,160,102,140,118,144,153,135,191,162,103,87,366,282,327,367,256,225,152,88,85,56,61,150,122,151,117,88,140,113,153,206,211,219,244,195,277,376,257,211,109,112,71,84,54,106,164,134,111,90,162,220,195,206,215,214,171,216,291,317,224,158,99,59,98,64,50,161,147,153,161,112,147,187,256,263,216,201,104,197,341,374,168,139,72,117,62,87,70,179,200,175,204,182,159,160,178,268,283,148,107,184,375,391,127,115,132,62,80,93,53,169,196,192,198,161,206,153,201,163,197,169,161,196,458,396,126,136,74,84,59,71,40,170,169,131,157,162,169,194,200,154,193,140,119,137,456,653,130,78,79,85,63,48,56,139,140,87,150,152,142,83,234,154,135,171,172,279,402,613,94,107,66,50,53,68,71,205,156,119,187,145,181,159,198,210,209,134,175,128,414,822,208,117,105,80,102,92,81,139,176,45,198,114,158,98,156,223,127,119,157,206,255,526,177,119,124,134,125,138,26,60,42,179,178,102,68,133,156,146,182,151,127,170,192,445,123,27,114,152,133,109,28,89,146,158,191,202,185,130,150,140,186,258,122,123,247,368,56,31,71,68,37,61,102,147,169,178,171,187,144,146,142,194,164,158,105,147,300,371,176,38,24,33,25,153,44,129,103,128,112,162,180,160,138,173,95,182,175,129,318,442,165,22,82,170,8,7,35,38,204,122,182,125,228,191,149,224,158,176,94,99,254,291,242,14,112,143,72,21,79,76,85,79,189,141,239,217,272,165,107,113,180,199,173,524,314,59,120,68,115,10,41,36,164,65,196,181,187,157,98,91,37,115,106,60,111,821,1168,581,126,68,13,57,19,18,88,75,120,208,224,86,128,101,79,129,80,51,147,828,883,646,124,97,11,11,19],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.0,0.0,-6378137.0),geoSystem=['GDC'])))])
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
