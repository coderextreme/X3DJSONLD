####################################################################################################
#
# Invoking X3D model self-test:
#
#   $ python ArtDecoPrototypes.py
#
# Python package x3d.py package is available on PyPI for import.
#   This approach simplifies Python X3D deployment and use.
#   https://pypi.org/project/x3d
#
# Installation:
#       pip install x3d
# or
#       python -m pip install x3d
#
# Developer options for loading x3d package in other Python programs:
#
#    from x3d import *  # preferred approach, terser source that avoids x3d.* class prefixes
#
# or
#    import x3d         # traditional way to subclass x3d package, all classes require x3d.* prefix,
#                       # but python source is very verbose, for example x3d.Material x3d.Shape etc.
#                       # X3dToPython.xslt stylesheet insertPackagePrefix=true supports this option.
#
# Project home page:    # X3D Python Scene Access Interface Library (X3DPSAIL)
#                       # https://www.web3d.org/x3d/stylesheets/python/python.html
# Conversion generator: # https://www.web3d.org/x3d/stylesheets/X3dToPython.xslt
#
####################################################################################################

from x3d import *

newModel=X3D(profile='Immersive',version='4.0',
  head=head(
    children=[
    meta(content='ArtDecoPrototypes.x3d',name='title'),
    meta(content="Prototype declarations defining values for X3D/VRML materials, originally converted from SGI's Open Inventor material examples.",name='description'),
    meta(content='David Roussel',name='creator'),
    meta(content='James Harney, Don Brutzman NPS',name='translator'),
    meta(content='7 April 2002',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='http://vrmlstuff.free.fr/materials',name='reference'),
    meta(content='Universal Media Material Library',name='subject'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='ArtDecoPrototypes.x3d'),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='ArtDeco00',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25,diffuseColor=(0.282435,0.085159,0.134462),shininess=0.127273,specularColor=(0.276305,0.11431,0.139857))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='ArtDeco01',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.254777,diffuseColor=(0.685208,0.134679,0.332385),shininess=0.071429,specularColor=(0.122449,0.050035,0.050035))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='ArtDeco02',
      children=[
      Comment(' computed conversion ambientIntensity=1.745282, normalized to 1.0 '),
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=1.0,diffuseColor=(0.536861,0.0529,0.245479),shininess=0.832432,specularColor=(0.805292,0.765198,0.747416))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='ArtDeco03',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.248649,diffuseColor=(1.0,0.452381,0.40339),shininess=0.902703,specularColor=(0.686486,0.396903,0.419275))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='ArtDeco04',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25,diffuseColor=(0.748016,0.298362,0.342624),shininess=0.69697,specularColor=(0.345455,0.345455,0.345455))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='ArtDeco05',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.24359,diffuseColor=(0.945455,0.318988,0.321717),shininess=0.018182,specularColor=(0.072727,0.021705,0.010732))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='ArtDeco06',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25946,diffuseColor=(0.228655,0.195513,0.425484),shininess=0.542553,specularColor=(0.324504,0.404255,0.404255))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='ArtDeco07',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.333333,diffuseColor=(0.200348,0.100857,0.320833),shininess=0.133333,specularColor=(0.311358,0.387879,0.387879))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='ArtDeco08',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.242424,diffuseColor=(0.330519,0.3389,0.6),shininess=0.787879,specularColor=(0.290909,0.290909,0.290909))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='ArtDeco09',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.333333,diffuseColor=(0.237059,0.096273,0.215625),shininess=0.133333,specularColor=(0.311358,0.387879,0.387879))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='ArtDeco10',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.242425,diffuseColor=(0.304,0.09025,0.207364),shininess=0.072727,specularColor=(0.6665,0.579046,0.830303))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='ArtDeco11',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.258928,diffuseColor=(0.335631,0.207672,0.238304),emissiveColor=(0.010638,0.010638,0.010638),shininess=0.021277,specularColor=(0.198631,0.075403,0.138803))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='ArtDeco12',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.240838,diffuseColor=(0.876873,0.14715,0.00856),shininess=0.076531,specularColor=(0.193878,0.029416,0.029416))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='ArtDeco13',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25,diffuseColor=(0.794445,0.249425,0.0),shininess=0.551515,specularColor=(0.62904,0.194211,0.033663))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='ArtDeco14',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25,diffuseColor=(0.510609,0.17264,0.059872),shininess=0.933333,specularColor=(0.533333,0.533333,0.533333))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='ArtDeco15',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.255814,diffuseColor=(0.914894,0.444404,0.348914),shininess=0.12766,specularColor=(0.345745,0.143066,0.0))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='ArtDeco16',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.240838,diffuseColor=(0.876873,0.323147,0.199564),shininess=0.80102,specularColor=(0.816327,0.278677,0.278677))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='ArtDeco17',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.242424,diffuseColor=(0.515625,0.315496,0.252441),shininess=0.933333,specularColor=(0.533333,0.533333,0.533333))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='ArtDeco18',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.264706,diffuseColor=(0.0,0.346939,0.253624),shininess=0.316327,specularColor=(0.0,0.311074,0.357143))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='ArtDeco19',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.259259,diffuseColor=(0.0,0.251004,0.239248),shininess=0.060606,specularColor=(0.177935,0.249369,0.229278))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='ArtDeco20',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.24,diffuseColor=(0.228298,0.385771,0.186794),shininess=0.393939,specularColor=(0.200464,0.300145,0.293518))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='ArtDeco21',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25,diffuseColor=(0.315389,0.544,0.258052),shininess=0.509389,specularColor=(0.456,0.456,0.456))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='ArtDeco22',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.246032,diffuseColor=(0.251104,0.312562,0.201724),shininess=0.086735,specularColor=(0.209184,0.113842,0.111328))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='ArtDeco23',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.242424,diffuseColor=(0.392348,0.456,0.417708),shininess=0.933333,specularColor=(0.533333,0.533333,0.533333))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='ArtDeco24',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.253968,diffuseColor=(1.0,0.854922,0.0),shininess=1.0,specularColor=(0.872449,0.247119,0.254214))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='ArtDeco25',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25641,diffuseColor=(0.795918,0.505869,0.093315),shininess=0.397959,specularColor=(0.923469,0.428866,0.006369))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='ArtDeco26',
      children=[
      Comment(' computed conversion ambientIntensity=2.226234, normalized to 1.0 '),
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=1.0,diffuseColor=(0.331633,0.296582,0.279057),shininess=0.096939,specularColor=(0.311224,0.25183,0.133042))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='ArtDeco27',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.263158,diffuseColor=(0.345455,0.163262,0.122622),shininess=0.048649,specularColor=(0.212121,0.107475,0.0))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='ArtDeco28',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.240506,diffuseColor=(0.277281,0.104336,0.0799),shininess=0.09697,specularColor=(0.305587,0.141916,0.270572))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='ArtDeco29',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.215686,diffuseColor=(0.087034,0.025888,0.0),shininess=0.045918,specularColor=(0.224138,0.104091,0.104091))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='ArtDeco30',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.0,diffuseColor=(0.0,0.0,0.0),shininess=0.081633,specularColor=(0.293243,0.297387,0.290421))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='ArtDeco31',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25641,diffuseColor=(0.236364,0.236364,0.236364),shininess=0.054546,specularColor=(0.29697,0.245839,0.295962))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='ArtDeco32',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.242424,diffuseColor=(0.38087,0.382957,0.417708),shininess=0.933333,specularColor=(0.533333,0.533333,0.533333))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='ArtDeco33',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.230089,diffuseColor=(0.610811,0.610811,0.610811),shininess=0.897297,specularColor=(0.767568,0.756757,0.764964))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='ArtDeco34',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25,shininess=0.0,specularColor=(0.2,0.2,0.2))])),
    Anchor(description='ArtDecoPrototypeExample',parameter=["target=_blank"],url=["../data/ArtDecoExamples.json","../data/ArtDecoExamples.x3d","ArtDecoExamples.json","ArtDecoExamples.x3d" ],
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.8,0.4,0))),
        geometry=Text(string=["ArtDecoExamples.x3d","is a Materials Prototype declaration file.","","For an example scene using these node,","click this text and view","ArtDecoExamples.x3d"],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=0.8)))])])
)

### X3D model conversion complete ###

####################################################################################################
# Self-test diagnostics
####################################################################################################

print('Self-test diagnostics for ArtDecoPrototypes.py:')
if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel)) # display meta info, hint, warning, error, TODO values in this model
# print('check newModel.XML() serialization...')
newModelXML= newModel.XML() # test export method XML() for exceptions during export
newModel.XMLvalidate()
# print(newModelXML) # diagnostic

try:
#   print('check newModel.VRML() serialization...')
    newModelVRML=newModel.VRML() # test export method VRML() for exceptions during export
    # print(prependLineNumbers(newModelVRML)) # debug
    print("Python-to-VRML export of VRML output successful", flush=True)
except Exception as err: # usually BaseException
    # https://stackoverflow.com/questions/18176602/how-to-get-the-name-of-an-exception-that-was-caught-in-python
    print("*** Python-to-VRML export of VRML output failed:", type(err).__name__, err)
    if newModelVRML: # may have failed to generate
        print(prependLineNumbers(newModelVRML, err.lineno))

try:
#   print('check newModel.JSON() serialization...')
    newModelJSON=newModel.JSON() # test export method JSON() for exceptions during export
#   print(prependLineNumbers(newModelJSON)) # debug
    print("Python-to-JSON export of JSON output successful (under development)")
except Exception as err: # usually SyntaxError
    print("*** Python-to-JSON export of JSON output failed:", type(err).__name__, err)
    if newModelJSON: # may have failed to generate
        print(prependLineNumbers(newModelJSON,err.lineno))

print("python ArtDecoPrototypes.py load and self-test diagnostics complete.")
