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
    meta(content='AutumnPrototypes.x3d',name='title'),
    meta(content="Prototype declarations defining values for X3D/VRML materials, originally converted from SGI's Open Inventor material examples.",name='description'),
    meta(content='David Roussel',name='creator'),
    meta(content='James Harney, Don Brutzman NPS',name='translator'),
    meta(content='7 April 2002',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='http://vrmlstuff.free.fr/materials',name='reference'),
    meta(content='Universal Media Material Library',name='subject'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/AutumnPrototypes.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='AutumnPrototypes.x3d'),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Autumn00',
      #  computed conversion ambientIntensity=11.4872, normalized to 1.0 
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.798793,diffuseColor=(0.964706,0.862745,0.811765),shininess=1.0,specularColor=(0.513726,0.415686,0.219608))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Autumn01',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.251748,diffuseColor=(0.749548,0.601201,0.461629),shininess=0.167568,specularColor=(0.078624,0.080397,0.048423))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Autumn02',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25,diffuseColor=(0.395932,0.226244,0.128242),shininess=0.994595,specularColor=(1.0,0.464407,0.4753))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Autumn03',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.215686,diffuseColor=(0.087034,0.025888,0.0),shininess=0.045918,specularColor=(0.224138,0.104091,0.104091))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Autumn04',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.251748,diffuseColor=(0.252438,0.108642,0.070416),shininess=0.066326,specularColor=(0.300449,0.142972,0.142972))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Autumn05',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.251748,diffuseColor=(0.502714,0.295535,0.191551),shininess=0.928571,specularColor=(0.265851,0.126509,0.126509))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Autumn06',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.251748,diffuseColor=(0.502714,0.295535,0.191551),shininess=0.167568,specularColor=(0.078624,0.080397,0.048423))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Autumn07',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25641,diffuseColor=(0.795918,0.505869,0.164673),shininess=0.831633,specularColor=(0.295918,0.096084,0.002041))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Autumn08',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.243243,diffuseColor=(0.297959,0.140816,0.105763),shininess=0.048649,specularColor=(0.176503,0.089428,0.0))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Autumn09',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25641,diffuseColor=(0.795918,0.505869,0.093315),shininess=0.397959,specularColor=(0.923469,0.428866,0.006369))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Autumn10',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25641,diffuseColor=(0.584588,0.273554,0.006861),shininess=0.066326,specularColor=(0.428571,0.199032,0.002956))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Autumn11',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25641,diffuseColor=(0.795918,0.273554,0.006861),shininess=1.0,specularColor=(0.48655,0.319155,0.444036))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Autumn12',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.240838,diffuseColor=(0.460362,0.141445,0.03863),shininess=0.178571,specularColor=(0.193005,0.159326,0.125431))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Autumn13',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.245763,diffuseColor=(0.34773,0.090909,0.005289),shininess=0.071429,specularColor=(0.336735,0.051091,0.051091))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Autumn14',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.240838,diffuseColor=(0.876873,0.217155,0.199564),shininess=0.984694,specularColor=(0.928571,0.140887,0.140887))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Autumn15',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.240838,diffuseColor=(0.876873,0.323147,0.199564),shininess=0.80102,specularColor=(0.816327,0.278677,0.278677))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Autumn16',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.240838,diffuseColor=(0.562852,0.14715,0.00856),shininess=0.071429,specularColor=(0.107143,0.016256,0.016256))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Autumn17',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.240838,diffuseColor=(0.876873,0.14715,0.00856),shininess=0.076531,specularColor=(0.193878,0.029416,0.029416))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Autumn18',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25,diffuseColor=(0.540541,0.0,0.0),shininess=0.064865,specularColor=(0.592903,0.0,0.129656))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Autumn19',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25,diffuseColor=(0.453448,0.136207,0.096385),shininess=0.892857,specularColor=(0.087474,0.207208,0.576531))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Autumn20',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.245763,diffuseColor=(0.272994,0.082002,0.058028),shininess=0.127551,specularColor=(0.27551,0.041802,0.041802))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Autumn21',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25,diffuseColor=(0.371013,0.644214,0.096552),shininess=0.892857,specularColor=(0.087474,0.207208,0.576531))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Autumn22',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.248407,diffuseColor=(0.114827,0.546465,0.085626),shininess=0.091837,specularColor=(0.117347,0.063862,0.062452))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Autumn23',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.253969,diffuseColor=(0.0,0.122449,0.0),shininess=0.081081,specularColor=(0.071925,0.356628,0.0))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Autumn24',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.246032,diffuseColor=(0.251104,0.312562,0.201724),shininess=0.790816,specularColor=(0.494898,0.269332,0.263386))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Autumn25',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.246032,diffuseColor=(0.251104,0.312562,0.201724),shininess=0.086735,specularColor=(0.209184,0.113842,0.111328))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Autumn26',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.248408,diffuseColor=(0.193147,0.251355,0.178548),shininess=0.091837,specularColor=(0.418367,0.227683,0.222656))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Autumn27',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.248407,diffuseColor=(0.135944,0.190588,0.122239),shininess=0.086735,specularColor=(0.209184,0.113842,0.111328))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Autumn28',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25,diffuseColor=(0.315389,0.544,0.258052),shininess=0.509389,specularColor=(0.456,0.456,0.456))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Autumn29',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.51975,diffuseColor=(0.176164,0.303858,0.144138),shininess=0.448649,specularColor=(0.465986,0.253598,0.247999))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Autumn30',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.253969,diffuseColor=(0.0,0.122449,0.0),shininess=0.081081,specularColor=(0.356628,0.356628,0.356628))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Autumn31',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.253969,diffuseColor=(0.0,0.122449,0.0),shininess=0.194595,specularColor=(0.0,0.303255,0.348166))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Autumn32',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.264706,diffuseColor=(0.0,0.346939,0.253624),shininess=0.316327,specularColor=(0.0,0.311074,0.357143))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Autumn33',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.243243,diffuseColor=(0.087755,0.063946,0.183051),shininess=0.07027,specularColor=(0.234804,0.171098,0.489785))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Autumn34',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.243243,diffuseColor=(0.263265,0.191837,0.549153),shininess=0.07027,specularColor=(0.374738,0.273065,0.781677))])),
    Anchor(description='click for examples',parameter=["target=_blank"],url=["AutumnExamples.x3d","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/AutumnExamples.x3d","AutumnExamples.wrl","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/AutumnExamples.wrl"],
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.8,0.4,0))),
        geometry=Text(string=["AutumnExamples.x3d","is a Materials Prototype declaration file.","","For an example scene using these node,","click this text and view","AutumnExamples.x3d"],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=0.8)))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for AutumnPrototypes.py")
