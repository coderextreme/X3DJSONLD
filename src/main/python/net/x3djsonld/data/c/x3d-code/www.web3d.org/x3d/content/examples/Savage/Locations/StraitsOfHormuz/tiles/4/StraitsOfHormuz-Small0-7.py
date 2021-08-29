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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small0-7.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(25.4489002189,56.180963250426785,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[329,269,236,298,363,454,633,707,705,733,619,565,439,650,453,329,386,198,169,142,176,127,298,226,227,292,409,636,872,925,950,624,570,628,590,519,463,366,358,365,265,188,157,172,241,212,244,366,404,637,832,880,900,712,545,538,595,438,354,316,321,302,456,224,179,180,213,202,263,358,375,396,466,776,703,565,593,426,540,456,375,318,274,273,322,367,212,241,215,193,249,278,270,336,615,627,529,463,476,412,577,416,325,344,243,325,280,277,270,313,193,190,250,228,317,526,612,493,594,590,504,365,483,502,422,271,235,357,186,235,184,209,188,181,192,288,281,364,581,493,682,569,430,356,333,513,520,325,205,190,152,216,265,251,177,168,178,187,208,257,557,484,535,356,354,414,330,407,343,335,209,294,135,266,215,237,169,160,162,162,203,260,361,499,416,360,413,385,287,351,224,186,205,239,123,214,170,138,174,157,154,204,181,222,366,442,425,386,413,293,283,235,234,170,179,128,113,124,130,93,186,150,144,144,194,226,276,512,413,395,353,368,292,241,288,348,229,160,104,179,100,73,187,156,139,132,150,177,197,388,437,459,463,423,274,388,433,261,214,123,101,112,73,58,261,154,136,127,130,149,230,278,426,564,426,297,335,292,224,162,141,91,152,92,51,47,215,179,128,122,125,169,146,201,248,519,366,371,422,260,357,190,216,82,81,60,45,39,208,197,137,114,111,200,126,147,307,277,333,432,316,371,302,255,332,173,86,56,48,45,381,189,158,123,109,99,118,111,265,178,287,366,470,335,431,496,398,135,91,121,49,43,411,270,167,133,104,98,100,104,173,190,277,544,347,308,256,292,436,223,153,149,41,33,419,411,280,166,156,88,83,102,120,184,401,453,341,339,343,222,236,110,85,65,55,38,371,315,277,177,156,88,84,89,100,116,195,335,373,330,320,214,142,122,151,52,43,37,264,217,201,98,81,80,77,78,79,94,112,161,341,241,306,255,229,279,84,65,58,41,138,251,171,89,86,72,70,68,68,82,108,305,225,176,364,301,142,168,129,69,62,145,204,133,106,86,74,67,65,61,61,67,82,132,188,156,222,275,141,106,107,175,207,172,208,136,106,85,74,67,64,61,58,64,75,122,185,148,211,271,149,109,105,191,217,150],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(26.3456597347756,56.33160427093061,0),geoSystem=['GDC'])))])
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
