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

newModel=X3D(profile='Immersive',version='3.0',
  head=head(
    children=[
    meta(content='UnquotedTokensNavigationInfoAndFontStyle.x3d',name='title'),
    meta(content='This scene tests whether enclosing "quote marks" can be omitted for three tokenized fields in X3D. The X3dToVrml97.xsl translator does this for FontStyle family, FontStyle justify and NavigationInfo type.',name='description'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='23 January 2001',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/development/UnquotedTokensNavigationInfoAndFontStyle.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    #  note that ordinary XML encoding of an MFString attribute is type='"EXAMINE" "ANY"' 
    children=[
    WorldInfo(title='UnquotedTokensNavigationInfoAndFontStyle.x3d'),
    Transform(translation=(-5,0,0),
      children=[
      Shape(
        #  \" (backslash quote) escapes a quote mark so that it is a rendered character, instead of a line terminator. 
        geometry=Text(string=["This scene tests whether enclosing"," \"quote marks\" can be omitted for"," three tokenized fields in X3D.","","Inspect translated VRML source to see","","NavigationInfo { "," type [ \"EXAMINE\" \"ANY\" ]","}","FontStyle {"," family [ \"TYPEWRITER\" \"SANS\" ]"," justify [ \"BEGIN\" \"MIDDLE\" ]","}"],
          #  Again note that ordinary XML encoding is a variation of family="&quot;TYPEWRITER&quot; SANS" justify='"BEGIN" "MIDDLE"' 
          fontStyle=FontStyle(family=["TYPEWRITER","SANS"],justify=["BEGIN","MIDDLE"],size=0.5,style_='BOLD')),
        appearance=Appearance(
          material=Material(diffuseColor=(0.1,0.7,0.6))))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for UnquotedTokensNavigationInfoAndFontStyle.py")
