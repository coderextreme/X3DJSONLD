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
        texture=ImageTexture(url=['../../images/4/bosphorus8-10.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.06225017873692,29.17931591246088,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[309,257,229,228,229,232,219,235,259,306,368,314,264,249,226,189,173,173,168,160,149,151,273,241,203,205,225,219,221,250,278,301,324,289,247,239,216,184,197,186,183,181,170,176,211,210,202,196,205,188,222,235,258,310,363,306,262,224,205,223,205,191,205,206,191,187,182,183,172,200,177,190,211,259,294,380,401,316,267,240,231,224,217,216,225,227,206,199,179,157,201,182,188,210,233,274,319,416,382,298,256,234,210,216,217,235,234,233,217,215,167,176,174,156,179,205,210,236,318,410,351,277,247,216,192,208,221,215,217,230,219,212,149,142,159,189,216,232,243,274,352,389,310,274,250,219,187,201,202,194,198,207,219,217,129,147,173,172,189,203,231,277,358,393,312,238,240,220,230,188,174,201,177,187,212,210,166,185,177,221,211,221,256,286,323,387,300,240,199,215,255,223,189,162,186,168,204,209,169,189,211,239,259,262,256,248,335,354,256,219,177,228,212,214,199,179,181,149,188,193,181,193,224,246,263,269,233,250,328,308,239,188,168,181,176,208,175,186,146,150,176,185,199,217,237,222,230,240,210,248,294,321,245,228,204,185,148,178,184,149,132,142,169,176,208,237,230,211,229,196,231,212,277,318,227,213,228,217,166,143,181,155,137,153,149,153,190,227,208,206,209,209,227,208,256,298,247,184,207,181,182,144,160,144,103,118,125,135,179,209,202,216,169,209,191,223,220,286,253,204,161,174,160,129,143,161,137,84,121,127,178,203,196,196,150,163,179,189,227,291,256,220,181,142,131,127,136,130,125,91,99,105,186,171,182,142,164,208,223,211,240,279,231,225,181,173,174,144,110,108,92,92,83,88,210,164,148,154,186,173,186,231,260,258,219,190,164,178,158,145,123,95,80,82,77,69,194,176,127,174,175,212,216,233,293,230,187,176,152,178,161,139,115,108,86,97,90,82,200,183,132,149,143,196,192,235,258,223,178,141,135,154,138,134,101,89,74,75,79,78,175,172,106,141,133,192,211,227,219,180,164,148,145,158,130,111,106,96,104,85,72,60,119,131,109,128,137,182,203,202,183,150,135,120,111,138,125,134,126,123,131,125,84,72,150,115,127,137,167,186,173,181,202,173,165,141,111,90,99,118,152,130,156,151,103,76,156,119,131,143,170,190,168,178,201,172,164,143,117,89,101,119,152,133,156,152,101,74],
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
